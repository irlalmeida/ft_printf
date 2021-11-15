/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:21:04 by coder             #+#    #+#             */
/*   Updated: 2021/11/15 04:33:20 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int num, int letter)
{
	int		i;
	char	*hex;

	hex = ft_itoa_xxp(num, letter);
	i = char_s(hex);
	free (hex);
	return (i);
}
