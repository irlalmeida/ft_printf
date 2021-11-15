/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:49:33 by coder             #+#    #+#             */
/*   Updated: 2021/11/15 04:34:02 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc_printf(size_t number, size_t size)
{
	char		*m;
	size_t		a;

	a = 0;
	m = malloc(number * size);
	if (m == 0)
		return (NULL);
	else
	{
		while (a < (number * size))
		{
			m[a] = '\0';
			a++;
		}
		return (m);
	}
}

char	*ft_strdup_printf(const char *str)
{
	int		size;
	char	*m;
	int		counter;

	size = 0;
	m = 0;
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
		size++;
	}
	m = malloc(size + 1);
	if (!m)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
	{
		m[counter] = str[counter];
		counter++;
	}
	m[counter] = '\0';
	return (m);
}

char	*find_num(int n, int *len)
{
	char	*num;

	num = 0;
	if (n < 0)
	{
		(*len)++;
		num = (char *)ft_calloc_printf((*len + 1), sizeof(char));
		if (!num)
			return (NULL);
		num[0] = '-';
	}
	else
	{
		num = (char *)ft_calloc_printf((*len + 1), sizeof(char));
		if (!num)
			return (NULL);
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char		*num;
	long int	nbr;
	int			len;
	int			nbr_n;

	nbr = n;
	len = 0;
	nbr_n = nbr;
	if (n == 0)
		return (ft_strdup_printf("0"));
	while (nbr_n != 0)
	{
		nbr_n /= 10;
		len++;
	}
	num = find_num(n, &len);
	if (n < 0)
		nbr = (nbr * (-1));
	while (((len--) > 0) && (nbr != 0))
	{
		num[len] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	return (num);
}
