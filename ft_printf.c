/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/06/21 21:42:39 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_to_zero(t_sign *sign)
{
	sign->flags.dot = 0;
	sign->flags.zero = 0;
	sign->flags.star = 0;
	sign->flags.padding = 0;
	sign->specs.c = 0;
	sign->specs.p = 0;
	sign->specs.s = 0;
	sign->specs.d_i = 0;
	sign->specs.u = 0;
	sign->specs.x = 0;
	sign->specs.X = 0;
	sign->specs.percentage = 0;
	sign->index = 0;
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			i;
	const char	*input;
	t_sign		*sign;

	i = 0;
	sign->flags.dot = 1;
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
