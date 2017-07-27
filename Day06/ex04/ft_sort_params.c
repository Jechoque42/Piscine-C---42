/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:53:26 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/11 19:05:07 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		rsl;

	rsl = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (rsl = (s1[i] - s2[i]));
		else if (s1[i] > s2[i])
			return (rsl = (s1[i] - s2[i]));
		i++;
	}
	return (rsl);
}

void	ft_puttab(char **tab, int arg)
{
	int i;

	i = 1;
	while (i < arg)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int swap;

	i = 1;
	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		i = 1;
		while (i <= argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				argv[argc + 1] = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = argv[argc + 1];
				swap++;
			}
			else
				i++;
		}
	}
	ft_puttab(argv, argc);
	return (0);
}
