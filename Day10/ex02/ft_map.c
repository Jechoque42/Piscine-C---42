/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:54:34 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/17 22:54:54 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*rsltab;
	int	i;

	if (!(rsltab = malloc(sizeof(int) * (length + 1))))
		return (0);
	i = 0;
	while (i < length)
	{
		rsltab[i] = (*f)(tab[i]);
		i++;
	}
	return (rsltab);
}
