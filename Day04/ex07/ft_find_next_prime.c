/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:21:24 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/06 22:17:08 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;
	int rslt;

	div = nb - 1;
	rslt = 1;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (div != 1)
	{
		if (nb % div == 0)
			rslt = 0;
		div--;
	}
	return (rslt);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
