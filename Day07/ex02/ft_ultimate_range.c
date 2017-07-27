/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 02:17:10 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/15 20:40:01 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*table;
	int	i;

	if (min >= max)
		return (0);
	table = (int*)malloc((max - min) * sizeof(int));
	if (table == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		table[i] = min++;
		i++;
	}
	*range = table;
	return (i);
}
