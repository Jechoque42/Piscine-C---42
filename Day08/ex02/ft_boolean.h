/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:50:31 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/17 02:03:59 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define TRUE (1)

# define FALSE (0)

# define SUCCESS (0)

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define EVEN(nbr) (((nbr) % 2) == 0)

# include <unistd.h>

typedef unsigned char	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
int		main(int argc, char **argv);

#endif
