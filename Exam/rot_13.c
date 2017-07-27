/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:49:50 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 21:57:55 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = ((((str[i]) - 97 + 13 ) % 26 ) + 97);	
		else if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = ((((str[i]) - 65 + 13 ) % 26 ) + 65);
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot13(argv[argc -1]);
	ft_putchar('\n');
	return (0);
}
