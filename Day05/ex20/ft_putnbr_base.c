/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:18:14 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 15:41:19 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	rsl;

	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		rsl = -nbr;
	}
	else
		rsl = nbr;
	if (rsl >= ft_strlen(base))
		ft_putnbr_base((rsl / ft_strlen(base)), base);
	ft_putchar(base[(rsl % ft_strlen(base))]);
}
