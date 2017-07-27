/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:07:35 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/19 16:33:10 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int rsl;

	i = 0;
	rsl = 1;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			rsl = 0;
		i++;
	}
	if (rsl == 0)
	{
		rsl = 1;
		i = 0;
		while (i + 1 < length)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				rsl = 0;
			i++;
		}
	}
	return (rsl);
}
