/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:29:14 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/20 23:26:45 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_error(char **files, int i)
{
	write(1, "cat: ", 5);
	ft_putstr(files[i]);
	if (errno == 21)
		ft_putstr(": Is a directory\n");
	else
		ft_putstr(": No such file or directory\n");
}

void	ft_display(char **files, int argc)
{
	ssize_t		ret;
	int			fd;
	int			i;
	char		buf[BUF_SIZE + 1];

	i = 0;
	while (++i < argc)
	{
		fd = open(files[i], O_RDWR);
		if (fd == -1)
			ft_error(files, i);
		else
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret + 1] = '\0';
			write(1, buf, ret);
			close(fd);
		}
	}
}

int		main(int argc, char **argv)
{
	char		buf[BUF_SIZE + 1];
	ssize_t		bite;

	if (argc == 1)
		while ((bite = read(STDIN_FILENO, buf, BUF_SIZE)))
			write(1, buf, bite);
	ft_display(argv, argc);
	return (0);
}
