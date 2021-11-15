/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:56:26 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/15 02:01:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_cases(const char *str, int i, va_list ap)
{
	if (str [i] == '%')
	{
		if (str [i + 1] == 'c')
			return (ft_printf_char(va_arg(ap, int)));
		else if (str [i + 1] == 's')
			return (char_s(va_arg(ap, char *)));
		else if (str [i + 1] == 'p')
			return (ft_printf_p(va_arg(ap, unsigned long long), 'a'));
		else if (str [i + 1] == 'd')
			return (ft_printf_int(va_arg(ap, int)));
		else if (str [i + 1] == 'i')
			return (ft_printf_int(va_arg(ap, int)));
		else if (str [i + 1] == 'u')
			return (ft_printf_int_u(va_arg(ap, unsigned int)));
		else if (str [i + 1] == 'x')
			return (ft_printf_hex(va_arg(ap, unsigned int), 'a'));
		else if (str [i + 1] == 'X')
			return (ft_printf_hex(va_arg(ap, unsigned int), 'A'));
		else if (str [i + 1] == '%')
			return (ft_printf_per());
	}
	return (0);
}
