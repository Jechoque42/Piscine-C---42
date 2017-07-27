/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 09:33:39 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/26 14:38:02 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *merge;

	merge = *begin_list1;
	if (*begin_list1 && begin_list2)
	{
		while (merge->next)
			merge = merge->next;
		merge->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
