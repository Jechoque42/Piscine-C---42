/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 12:05:45 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/17 03:29:04 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int			i;
	char		*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char) * (ft_strlen(src)) + 1)))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*partab;
	int			i;

	i = 0;
	if (!(partab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		partab[i].size_param = ft_strlen(av[i]);
		partab[i].str = av[i];
		partab[i].copy = ft_strdup(av[i]);
		partab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	partab[i].str = 0;
	return (partab);
}
