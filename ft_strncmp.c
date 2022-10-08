/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:07:36 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/28 21:00:26 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *) s1;
	src = (unsigned char *) s2;
	while ((i < n) && (dst[i] != '\0' || src[i] != '\0'))
	{
		if (dst[i] != src[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}
