/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:31:55 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/23 18:50:30 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *) buf1;
	src = (unsigned char *) buf2;
	if (buf1 == buf2)
		return (NULL);
	if (dst < src)
	{
		while (n--)
			*dst++ = *src++;
		return (buf1);
	}
	dst += n;
	src += n;
	while (n--)
	{
		*--dst = *--src;
	}
	return (buf1);
}
