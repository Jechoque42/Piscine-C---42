/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 21:17:18 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 21:30:33 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	if (start > end)
		return (NULL);
	if(!(tab = malloc(sizeof(int) * (end - start + 1))))
		return (NULL);
	while (start <= end)
	{
		tab[end - start] = start;
		start++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	ft_rrange(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
