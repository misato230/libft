/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:38:19 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/28 21:06:34 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	if ((char) c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			j = i + 1;
		i++;
	}
	if (j != 0)
		return (&str[j - 1]);
	return (NULL);
}
