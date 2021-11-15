/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:49:33 by coder             #+#    #+#             */
/*   Updated: 2021/11/15 03:39:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*find_num_u(int *len)
{
	char	*num;

	num = (char *)ft_calloc_printf((*len + 1), sizeof(char));
	if (!num)
		return (NULL);
	return (num);
}

char	*ft_itoa_u(unsigned int n)
{
	char			*num;
	long long int	nbr;
	int				len;
	long long int	nbr_n;

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
	num = (char *)ft_calloc_printf((len + 1), sizeof(char));
	while (((len--) > 0) && (nbr != 0))
	{
		num[len] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	return (num);
}

char	*ft_itoa_xxp(unsigned long long n, int l)
{
	char				*num;
	unsigned long long	nbr;
	int					len;
	unsigned long long	nbr_n;

	nbr = n;
	len = 0;
	nbr_n = nbr;
	if (n == 0)
		return (ft_strdup_printf("0"));
	while (nbr_n != 0)
	{
		nbr_n /= 16;
		len++;
	}
	num = (char *)ft_calloc_printf((len + 1), sizeof(char));
	while (((len--) > 0) && (nbr != 0))
	{
		if (nbr % 16 < 10)
			num[len] = ((nbr % 16) + '0');
		else
			num[len] = (((nbr % 16) - 10) + l);
		nbr /= 16;
	}
	return (num);
}
