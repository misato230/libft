/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:02:50 by satoumiu          #+#    #+#             */
/*   Updated: 2022/10/08 18:46:25 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*src;
	size_t	str_len;

	str_len = ft_strlen(s1) + 1;
	src = (char *)malloc(sizeof(char) * str_len);
	if (!src)
		return (NULL);
	ft_memcpy(src, s1, str_len);
	return (src);
}
