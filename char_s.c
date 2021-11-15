/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:13:53 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/15 03:03:22 by coder            ###   ########.fr       */
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
