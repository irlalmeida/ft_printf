/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:18 by iribeiro          #+#    #+#             */
/*   Updated: 2021/06/21 21:42:28 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE = 1
# define FALSE = 0 

# include<unistd.h>
# include<stdarg.h>
# include "../iribeiro-libft/libft.h"

typedef struct s_signals
{
	t_flags	flags;
	t_specs	specs;
	int		index;
}	t_sign;
typedef struct s_flags
{
	int	dot;
	int	zero;
	int	star;
	int	padding;
}	t_flags;
typedef struct s_specifiers
{
	int	c;
	int	p;
	int	s;
	int	d_i;
	int	u;
	int	x;
	int	X;
	int	percentage;
}	t_specs;

int		ft_printf(const char *str, ...);
int		ft_printf_string(const char *str);
void	ft_printf_int (long int n);
int		ft_printf_char(const char str);

#endif
