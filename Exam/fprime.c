/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 22:13:35 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 22:26:58 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_prime(int nb)
{
	int i;

	if (nb ==1)
		printf("%d", nb);
	else
	{
		i = 1;
		while (nb > 1)
		{
			if (nb % ++i == 0)
			{
				printf("%d", i);
				nb /= i;
				if (nb > 1)
					printf("*");
				--i;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_prime(atoi(argv[1]));
	printf("\n");
	return (0);
}
