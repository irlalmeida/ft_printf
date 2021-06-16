/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/06/15 22:41:23 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			i;
	const char	*input;

	i = 0;
	va_start(ap, str);
	input = str;
	if (ft_strchr(input, '%') == NULL)
		ft_printf_string(str);
	else
		while (str && str[i])
			if ((str [i] != '%') && (str [i - 1] != '%'))
				ft_printf_char(str[i]);
			else
			
	va_end(ap);
	return (0);
}
