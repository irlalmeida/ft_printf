/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:30:14 by iribeiro          #+#    #+#             */
/*   Updated: 2021/06/04 12:34:12 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(int hex)
{
	int	convert_num;

	if (hex > 0)
	{
		convert_num = hex % 16;
		if (convert_num < 10)
		{
			convert_num = convert_num + 48;
			
		}	
	}
}
