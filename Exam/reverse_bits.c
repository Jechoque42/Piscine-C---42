/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 18:28:36 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 18:56:17 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	last;
	unsigned char	revs;

	i = 0;
	while(i < 7)
	{
		last = octet & 1;
		octet >>= 1;
		revs += last;
		revs <<= 1;
		i++;
	}
	return (revs);
}

int		main(void)
{
	unsigned char d;
	d = reverse_bits('t');
	write(1, &d, 1);
	return (0);
}
