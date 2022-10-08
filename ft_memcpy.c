/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:45:38 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/28 21:05:29 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*dst1;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	str = (unsigned char *) src;
	dst1 = (unsigned char *) dst;
	while (i < n)
	{
		dst1[i] = str[i];
		i++;
	}
	return (dst);
}
