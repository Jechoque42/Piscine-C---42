/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:31:58 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/18 16:18:43 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		rsl;

	rsl = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (rsl = (s1[i] - s2[i]));
		else if (s1[i] > s2[i])
			return (rsl = (s1[i] - s2[i]));
		i++;
	}
	return (rsl);
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int	swap;

	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		i = 0;
		while (tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swap++;
			}
			i++;
		}
	}
}
