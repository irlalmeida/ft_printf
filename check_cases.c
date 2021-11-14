/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:56:26 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/14 17:52:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "iribeiro-libft/libft.h"

int	check_cases(const char *str, int i, va_list ap)
{
	if ((str [i] == '%') && (str [i - 1] != '%'))
	{
		if (str [i + 1] == 'c')
			return (ft_printf_char(va_arg(ap, int)));
		else if (str [i + 1] == 's')
			return (char_s(va_arg(ap, char *)));
		else if (str [i + 1] == 'p')
			;
		else if (str [i + 1] == 'd')
			return (ft_printf_int(va_arg(ap, int)));
		else if (str [i + 1] == 'i')
			;
		else if (str [i + 1] == 'u')
			;
		else if (str [i + 1] == 'x')
			;
		else if (str [i + 1] == 'X')
			;
		else if (str [i + 1] == '%')
			write (1, "%", 1);
	}
	return (0);
}
