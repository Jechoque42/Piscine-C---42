/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 16:43:20 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 20:40:05 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	brainfuck(char *str)
{
	int		tab[2048] = {0};
	int		*ptr;
	int		count_loop;

	ptr = tab;
	count_loop = 0;
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			++*ptr;
		else if (*str == '-')
			--*ptr;
		else if (*str == '.')
			write(1, ptr, 1);
		else if (*str == '[' && *ptr == 0)
		{
			count_loop = 1;
			while (count_loop != 0)
			{
				str++;
				if (*str == ']')
					--count_loop;
				if (*str == '[')
					++count_loop;
			}
		}
		else if (*str == ']' && *ptr != 0)
		{
			count_loop = 1;
			while (count_loop != 0)
			{
				str--;
				if (*str == ']')
					++count_loop;
				if (*str == '[')
					--count_loop;
			}
		}
		str++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	brainfuck(argv[1]);
	return (0);
}
