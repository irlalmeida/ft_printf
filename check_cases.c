/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:56:26 by iribeiro          #+#    #+#             */
/*   Updated: 2021/10/09 14:26:03 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_cases(char *str, int i)
{
	if ((str [i] == '%') && (str [i - 1] != '%'))
	{
		if (str [i + 1] == 'c')
			write (1, , 1);
		else if (str [i + 1] == 's')
			;
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
