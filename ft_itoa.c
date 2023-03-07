/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:10:36 by satoumiu          #+#    #+#             */
/*   Updated: 2023/03/07 15:59:21 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_dgt(int n)
{
	size_t	digit;

	digit = 0;
	if (n >= 0 && n < 10)
		return (1);
	if (n < 0)
		digit++;
	while (n != 0)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

static char	*change_itoa(char *str, int n, size_t count)
{
	unsigned int	nbr;

	if (n == 0)
		str[--count] = 0 + '0';
	nbr = 0;
	if (n < 0)
	{
		nbr = n * (-1);
		while (count > 0)
		{
			str[--count] = nbr % 10 + '0';
			nbr /= 10;
		}
		str[count] = '-';
	}
	nbr = n;
	while (count > 0)
	{
		str[--count] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	count;
	char	*str;

	count = count_dgt(n);
	str = malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	str = change_itoa(str, n, count);
	str[count] = '\0';
	return (str);
}
