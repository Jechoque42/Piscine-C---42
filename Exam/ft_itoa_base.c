/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 16:00:35 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 16:57:08 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <stdlib.h>

char	ft_check_base(int nbr)
{
	char *str_base;

	str_base = "0123456789ABCDEF";
	return (str_base[nbr]);
}

char	*str_rev(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j = j - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	i = 0;
	return (&str[i]);
}

char	*ft_itoa_base(int value, int base)
{
	char *str;
	int i;

	i = 0;
	if(!(str = malloc(sizeof(char) * 1024)))
		return (NULL);
	if (base < 2 || base > 16)
		return (NULL);
	while (value >= base)
	{
		str[i] = ft_check_base(value % base);
		value = value / base;
		i++;
	}
	str[i] = ft_check_base(value % base);
	if (base == 10 && value < 0)
	{
		i++;
		str[i] = '-';
	}
	i++;
	str[i] = '\0';
	return ((str_rev(str)));
}
