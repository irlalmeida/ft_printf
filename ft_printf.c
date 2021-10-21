/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/10/18 20:46:17 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../iribeiro-libft/libft.h"

//void	set_to_zero(t_sign *sign)
//{
//	sign->specs.c = 0;
//	sign->specs.p = 0;
//	sign->specs.s = 0;
//	sign->specs.d_i = 0;
//	sign->specs.u = 0;
//	sign->specs.x = 0;
//	sign->specs.x_u = 0;
//	sign->index = 0;
//}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			i;
	const char	*input;
	t_sign		*sign;

	i = 0;
	va_start(ap, str);
	input = str;
	if (ft_strchr(input, '%') == NULL)
		ft_printf_string(str);
	else
	{	
		while (str && str[i])
		{
			if ((str [i] != '%') && (str [i - 1] != '%'))
				ft_printf_char(str[i]);
			else
				check_cases(str, i, ap);
			i++;
		}
	}
	va_end(ap);
	return (0);
}
