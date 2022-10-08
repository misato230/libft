/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:55:03 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/23 18:50:06 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*array1;
	unsigned char	*array2;
	size_t			i;

	array1 = (unsigned char *)buf1;
	array2 = (unsigned char *)buf2;
	i = 0;
	while (i != n)
	{
		if (array1[i] != array2[i])
			return (array1[i] - array2[i]);
		i++;
	}
	return (0);
}
