/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:18 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/03 22:44:23 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE = 1
# define FALSE = 0 

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>
# include "../iribeiro-libft/libft.h"

typedef struct s_specifiers
{
	int	c;
	int	p;
	int	s;
	int	d_i;
	int	u;
	int	x;
	int	x_u;
}	t_specs;

typedef struct s_signals
{
	t_specs	specs;
	int		index;
}	t_sign;

int		ft_printf(const char *str, ...);
int		ft_printf_string(const char *str);
int		ft_printf_int(long int n);
int		ft_printf_char(const char str);
int		check_cases(const char *str, int i, va_list ap);
int		char_s(char *str);

#endif
