/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:39:21 by misato            #+#    #+#             */
/*   Updated: 2022/08/23 18:51:43 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned char	*src1;
	size_t			src_len;

	i = 0;
	src_len = 0;
	src1 = (unsigned char *) src;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src1[i] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
