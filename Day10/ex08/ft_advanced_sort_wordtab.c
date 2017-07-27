/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 23:33:44 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/18 16:21:32 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap1(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int swap;

	i = 0;
	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		i = 0;
		while (tab[i + 1] != 0)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				ft_swap1(&tab[i], &tab[i + 1]);
				swap++;
			}
			i++;
		}
	}
}
