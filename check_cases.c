/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:56:26 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/03 22:50:44 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../iribeiro-libft/libft.h"

int	check_cases(const char *str, int i, va_list ap)
{
	int	c;

	if ((str [i] == '%') && (str [i - 1] != '%'))
	{
		if (str [i + 1] == 'c')
		{
			c = va_arg(ap, int);
			return (write(1, &c, 1));
		}
		else if (str [i + 1] == 's')
			return (char_s(va_arg(ap, char *)));
		else if (str [i + 1] == 'p')
			;
		else if (str [i + 1] == 'd')
			write(1, ft_itoa(va_arg(ap, int)), 4);
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
