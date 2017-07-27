/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:06:50 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/05 12:54:11 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print(int x, int y)
{
	if (x < 10)
		ft_putchar('0');
	ft_putnbr(x);
	ft_putchar(' ');
	if (y < 10)
		ft_putchar('0');
	ft_putnbr(y);
	if (x != 98 || y != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x != 99)
	{
		ft_print(x, y);
		y++;
		if (y > 99)
		{
			x++;
			y = x + 1;
		}
	}
}
