/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:19:19 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/06 11:37:37 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int rslt;

	rslt = nb;
	if (power == 0)
		rslt = 1;
	else if (power < 0)
		rslt = 0;
	if (power > 0)
	{
		power--;
		rslt = rslt * (ft_recursive_power(nb, power));
	}
	return (rslt);
}
