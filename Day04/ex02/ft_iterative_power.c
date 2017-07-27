/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:54:26 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/06 11:18:20 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rslt;

	rslt = nb;
	if (power == 0)
		rslt = 1;
	else if (power < 0)
		rslt = 0;
	if (power > 0)
	{
		while (power != 1)
		{
			rslt = rslt * nb;
			power--;
		}
	}
	return (rslt);
}
