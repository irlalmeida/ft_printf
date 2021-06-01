/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:51:49 by iribeiro          #+#    #+#             */
/*   Updated: 2021/06/01 10:38:15 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_putchar_fd(char c, int fd);

int	ft_printf_string(const char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (0);
}
