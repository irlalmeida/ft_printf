/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:13:53 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/15 04:32:56 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	char_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (char_s("(null)"));
	while (*str)
	{
		write(1, str, 1);
		str++;
		i++;
	}
	return (i);
}
