/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 09:42:26 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/27 20:32:09 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_nbr(char *str, char *base, int i)
{
	int j;

	while (str[i])
	{
		j = 0;
		while (str[i] != base[j] && base[j])
		{
			j++;
			if (base[j] == '\0' && str[i])
				return (i);
		}
		i++;
	}
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_link(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i[4];

	i[0] = 0;
	i[1] = 0;
	i[2] = 1;
	if (ft_check_base(base) < 2)
		return (i[1]);
	while (str[i[0]] == '\t' || str[i[0]] == '\v' || str[i[0]] == '\r'
			|| str[i[0]] == '\n' || str[i[0]] == '\f' || str[i[0]] == ' ')
		i[0]++;
	if (str[i[0]] == '-' || str[i[0]] == '+')
	{
		if (str[i[0]++] == '-')
			i[2] = -1;
	}
	if ((i[3] = (ft_check_nbr(str, base, i[0]))) == 0)
		return (i[1]);
	while (i[0] < i[3])
	{
		i[1] = (i[1] * ft_check_base(base)) + (ft_link(str[i[0]], base));
		i[0]++;
	}
	i[1] *= i[2];
	return (i[1]);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
