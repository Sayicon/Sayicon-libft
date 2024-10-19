/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:22:00 by mcekici           #+#    #+#             */
/*   Updated: 2024/10/16 14:22:00 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numcount(int n)
{
	if (!(n / 10))
		return (1);
	else
		return (1 + numcount(n / 10));
}

static char	*convert(int n, char *ptr, int size)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	ptr[--size] = 0;
	while (--size)
	{
		ptr[size] = (n % 10) + '0';
		n /= 10;
	}
	if (!size && ptr[0] != '-')
		ptr[0] = (n % 10) + '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;

	size = numcount(n) + 1;
	if (n < 0)
		size ++;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = (char *)malloc(size);
	if (!ptr)
		return (0);
	return (convert(n, ptr, size));
}
