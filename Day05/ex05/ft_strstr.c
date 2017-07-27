/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:40:13 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/11 17:22:10 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = ft_strlen(str);
	l = ft_strlen(to_find);
	while (str[j] != '\0' && i < l)
	{
		i = 0;
		while (str[j] == to_find[i])
		{
			i++;
			j++;
			if (to_find[i] == '\0')
				return (&str[j - i]);
			if (to_find[i] != str[j])
				j--;
		}
		j++;
	}
	return (0);
}
