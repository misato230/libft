/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:23:35 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/27 19:27:12 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *)s;
	if ((char) c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (array[i] != '\0')
	{
		if (array[i] == (char) c)
			return (&array[i]);
		i++;
	}
	return (NULL);
}
