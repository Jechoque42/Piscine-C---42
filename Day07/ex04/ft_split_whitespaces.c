/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:54:17 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/13 17:13:39 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbr_words(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			i++;
			if (str[i] != ' ' || str[i] != '\n' || str[i] != '\t')
				word++;
		}
		i++;
	}
	return (word + 1);
}

int		ft_nbr_char(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_nbr_words(str) + 1))))
		return (NULL);
	while (str[i])
	{
		k = 0;
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (!(tab[j] = malloc(sizeof(char) * (ft_nbr_char(str, i)))))
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
		if (str[i])
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
