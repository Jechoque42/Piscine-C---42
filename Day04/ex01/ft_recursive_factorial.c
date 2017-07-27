/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:47:13 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/07 03:10:09 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int reslt;

	reslt = nb;
	if (nb == 0)
		reslt = 1;
	if (nb < 0 || nb > 13)
		reslt = 0;
	nb--;
	if (nb > 0)
		reslt = reslt * ft_recursive_factorial(nb);
	return (reslt);
}
