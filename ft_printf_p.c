/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:21:04 by coder             #+#    #+#             */
/*   Updated: 2021/11/15 04:33:34 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(unsigned long long num, int letter)
{
	int		i;
	char	*hex;

	hex = ft_itoa_xxp(num, letter);
	char_s("0x");
	i = char_s(hex);
	free (hex);
	return (i + 2);
}
