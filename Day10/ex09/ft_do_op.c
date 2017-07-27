/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:57:02 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/19 16:14:31 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ ");
	while (a < 5)
	{
		ft_putstr(g_opptab[a].opp);
		ft_putchar(' ');
		a++;
	}
	ft_putstr("] are accepted.");
	return (0);
}

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

void	ft_error(int i, char **argv)
{
	if (i == 3 && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero");
	else if (i == 4 && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr((*g_opptab[i].fct)(ft_atoi(argv[1])
					, ft_atoi(argv[3])));
}

void	ft_display(char **argv)
{
	int i;
	int j;

	i = -2;
	while (i < 5)
	{
		j = 0;
		while (g_opptab[i].opp[j] == argv[2][j])
		{
			if (g_opptab[i].opp[j] == '\0' && argv[2][j] == '\0')
			{
				ft_error(i, argv);
				return ;
			}
			j++;
		}
		i++;
		if (i == 5)
			(*g_opptab[i].fct)(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else
		ft_display(argv);
	ft_putchar('\n');
	return (0);
}
