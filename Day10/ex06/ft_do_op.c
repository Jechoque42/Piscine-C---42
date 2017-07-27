/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:57:02 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/19 16:15:48 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int rslt;

	i = 0;
	sign = 1;
	rslt = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = (rslt * 10) + (str[i] - '0');
		i++;
	}
	rslt *= sign;
	return (rslt);
}

void	ft_display(char **argv, int (**tabf)(int, int))
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) != 0)
		ft_putnbr(tabf[0](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero");
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) != 0)
		ft_putnbr(tabf[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero");
	else if (argv[2][0] == '+')
		ft_putnbr(tabf[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr(tabf[3](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr(tabf[4](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else
		ft_putnbr(0);
}

int		main(int argc, char **argv)
{
	int	(*tabf[5])(int a, int b);

	tabf[0] = &ft_div;
	tabf[1] = &ft_mod;
	tabf[2] = &ft_add;
	tabf[3] = &ft_sub;
	tabf[4] = &ft_mlt;
	if (argc != 4)
		return (0);
	ft_display(argv, tabf);
	ft_putchar('\n');
	return (0);
}
