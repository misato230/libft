/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:25:45 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/30 09:53:10 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*new_src;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s1 = (char *)s;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new_src = malloc(sizeof(char) * (len + 1));
	if (!new_src)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
	{
		new_src[0] = '\0';
		return (new_src);
	}
	i = 0;
	while (i < len && s1[(size_t)start + i] != '\0')
	{
		new_src[i] = s1[(size_t)start + i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}
