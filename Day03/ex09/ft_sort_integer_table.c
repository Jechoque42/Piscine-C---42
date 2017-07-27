/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 01:35:17 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/06 01:57:41 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int swap;
	int i;
	int j;

	swap = 1;
	i = 0;
	j = 1;
	while (swap != 0)
	{
		i = 0;
		j = 1;
		swap = 0;
		while (j <= size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
				swap++;
			}
			i++;
			j++;
		}
	}
}
