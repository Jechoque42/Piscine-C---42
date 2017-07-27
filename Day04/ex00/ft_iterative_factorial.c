/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:27:23 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/07 02:48:01 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int reslt;

	reslt = nb;
	if (nb == 0)
		reslt = 1;
	if (nb < 0 || nb > 13)
		reslt = 0;
	nb--;
	while (nb > 0)
	{
		reslt = reslt * nb;
		nb--;
	}
	return (reslt);
}
