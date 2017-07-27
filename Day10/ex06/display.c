/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 20:48:11 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/17 20:50:56 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	nb2 = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb2 = -nb;
	}
	else
		nb2 = nb;
	if (nb2 >= 10)
		ft_putnbr(nb2 / 10);
	ft_putchar(nb2 % 10 + '0');
}
