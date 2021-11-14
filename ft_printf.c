/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/14 18:28:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "iribeiro-libft/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0' || s[counter] == (char)c)
	{
		if (s[counter] == (char)c)
			return (char *)s + counter;
		counter++;
	}
	s = NULL;
	return (char *)s;
}

size_t	ft_strlen(const char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			i;
	const char	*input;

	i = 0;
	va_start(ap, str);
	input = str;
	if (ft_strchr(input, '%') == NULL)
		ft_printf_string(str);
	else
	{	
		while (str && str[i])
		{
			if ((str [i] != '%') && (str [i - 1] != '%'))
				ft_printf_char(str[i]);
			else
				check_cases(str, i, ap);
			i++;
		}
		return (--i);
	}
	va_end(ap);
	return (0);
}
