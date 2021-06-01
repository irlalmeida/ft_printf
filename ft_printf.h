/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:18 by iribeiro          #+#    #+#             */
/*   Updated: 2021/06/01 10:37:00 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>
# include "../iribeiro-libft/libft.h"

int		ft_printf_string(const char *str);
int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd);

#endif
