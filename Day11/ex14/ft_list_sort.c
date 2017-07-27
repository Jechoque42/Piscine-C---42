/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 09:43:55 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/20 09:51:13 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*sort;
	t_list	*sort2;
	t_list	*next;

	sort = *begin_list;
	while (sort)
	{
		sort2 = *begin_list;
		while (sort2->next)
		{
			if ((*cmp)(sort2->data, sort2->next->data) > 0)
			{
				next = sort2->data;
				sort2->data = sort2->next->data;
				sort2->next->data = next;
			}
			sort2 = sort2->next;
		}
		sort = sort->next;
	}
}
