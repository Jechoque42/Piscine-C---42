/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 02:17:13 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/12 17:05:54 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	rsl;

	i = 0;
	j = 0;
	rsl = 0;
	while (dest[i] != '\0')
		i++;
	while (src[rsl] != '\0')
		rsl++;
	if (size < i)
		rsl += size;
	else
		rsl += i;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (rsl);
}
