/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:13:53 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/03 22:49:57 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../iribeiro-libft/libft.h"

int	char_s(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}
