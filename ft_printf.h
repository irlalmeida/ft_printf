/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:18 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/15 04:34:25 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TRUE = 1
# define FALSE = 0 

# include<unistd.h>
# include<stdarg.h>
# include<stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printf_string(const char *str);
int		ft_printf_int(long int n);
int		ft_printf_char(const char str);
int		check_cases(const char *str, int i, va_list ap);
int		char_s(char *str);
int		ft_printf_per(void);
void	*ft_calloc_printf(size_t number, size_t size);
char	*ft_strdup_printf(const char *str);
char	*find_num(int n, int *len);
char	*ft_itoa(int n);
char	*ft_itoa_u(unsigned int n);
int		ft_printf_int_u(unsigned int n);
char	*ft_itoa_xxp(unsigned long long n, int l);
int		ft_printf_hex(unsigned int num, int letter);
int		ft_printf_p(unsigned long long num, int letter);

#endif