/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:51:49 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/14 21:18:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(const char *str)
{
	int counter;

	counter = -1;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
		counter++;
	}
	return (counter);
}
