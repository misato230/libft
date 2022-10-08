/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:01:54 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/23 18:51:59 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*src;
	size_t	i;
	size_t	j;
	size_t	need_len;

	src = (char *)needle;
	need_len = ft_strlen(src);
	if (src[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while ((haystack[i + j] == src[j]) && (i + j < len))
		{
			if (j + 1 == need_len)
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
