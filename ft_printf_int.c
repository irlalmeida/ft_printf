/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:42:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/10/09 14:26:26 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_int(long int n)
{
	int			num[11];
	int			num_count;
	long int	long_num;

	long_num = n;
	num_count = 0;
	if (long_num < 0)
	{
		long_num = -long_num;
		write(1, "-", 1);
	}
	if (long_num == 0)
		write(1, "0", 1);
	while (long_num > 0)
	{
		num[num_count] = long_num % 10 + '0';
		long_num = long_num / 10;
		num_count++;
	}
	num_count--;
	while (num_count >= 0)
	{
		write(1, &num[num_count], 1);
		num_count--;
	}
}
