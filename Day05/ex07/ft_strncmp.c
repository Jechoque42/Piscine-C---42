/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:12:10 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/11 16:15:46 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				rsl;

	rsl = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] < s2[i])
			return (rsl = (s1[i] - s2[i]));
		else if (s1[i] > s2[i])
			return (rsl = (s1[i] - s2[i]));
		i++;
	}
	return (rsl);
}
