/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 13:32:19 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/20 20:47:29 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	if (!begin_list && !*begin_list)
		return ;
	while (*begin_list)
	{
		list = *begin_list;
		*begin_list = (*begin_list)->next;
		free(list);
	}
	*begin_list = NULL;
}
