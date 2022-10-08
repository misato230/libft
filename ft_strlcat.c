/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:06:11 by satoumiu          #+#    #+#             */
/*   Updated: 2022/10/08 18:46:46 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	char	*src1;

	src1 = (char *) src;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len < dstsize)
	{
		i = 0;
		while (src1[i] != '\0' && i < dstsize - dst_len - 1)
		{
			dst[dst_len + i] = src1[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return (src_len + dst_len);
	}
	return (src_len + dstsize);
}
