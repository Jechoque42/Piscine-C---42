/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:02:28 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/05 16:40:06 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int **b)
{
	int tmp;

	tmp = *a;
	*a = **b;
	**b = tmp;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	div = *a / *b;
	mod = *a % *b;
	ft_swap(&div, &a);
	ft_swap(&mod, &b);
}
