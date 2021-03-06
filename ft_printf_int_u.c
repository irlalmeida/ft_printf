/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:42:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/15 04:33:26 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int_u(unsigned int n)
{
	int		i;
	char	*s;

	s = ft_itoa_u(n);
	i = char_s(s);
	free (s);
	return (i);
}
