/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:18 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/14 17:13:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE = 1
# define FALSE = 0 

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>
# include "iribeiro-libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printf_string(const char *str);
int		ft_printf_int(long int n);
int		ft_printf_char(const char str);
int		check_cases(const char *str, int i, va_list ap);
int		char_s(char *str);

#endif
