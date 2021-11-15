/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:49:11 by iribeiro          #+#    #+#             */
/*   Updated: 2021/11/15 04:34:19 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0' || s[counter] == (char)c)
	{
		if (s[counter] == (char)c)
			return ((char *)s + counter);
		counter++;
	}
	s = NULL;
	return ((char *)s);
}

size_t	ft_strlen(const char *str)
{
	int	counter;

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
	int			returned;

	i = 0;
	returned = 0;
	va_start(ap, str);
	while (str[i])
	{
		if ((str [i] == '%') && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			returned = check_cases(str, i, ap) + returned;
			i = i + 1;
		}
		else
			returned = ft_printf_char(str[i]) + returned;
		i++;
	}
	return (returned);
	va_end(ap);
	return (ft_strlen(str));
}
