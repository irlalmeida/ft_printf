/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:56:26 by iribeiro          #+#    #+#             */
/*   Updated: 2021/10/18 20:53:23 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../iribeiro-libft/libft.h"

void	check_cases(const char *str, int i, va_list ap)
{
	if ((str [i] == '%') && (str [i - 1] != '%'))
	{
		if (str [i + 1] == 'c')
			write (1, ft_itoa(va_arg(ap, int)), 4);
		else if (str [i + 1] == 's')
			while (char) write(2, va_arg(ap, char *), 2); char ++;
				else if (str [i + 1] == 'p')
					;
				else if (str [i + 1] == 'd')
					;
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
}
