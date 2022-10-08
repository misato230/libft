/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:10:05 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/31 14:32:24 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start_trim(char *s, char *set)
{
	size_t	i;
	size_t	c;
	size_t	count;

	i = 0;
	c = 0;
	count = ft_strlen (set);
	while (s[i] != '\0')
	{
		while (s[i] != set[c])
		{
			c++;
			if (count == c)
				return (i);
		}
		c = 0;
		i++;
	}
	return (0);
}

static size_t	end_trim(char *s, char *set)
{
	size_t	c;
	size_t	set_count;
	size_t	s_count;

	s_count = ft_strlen(s);
	set_count = ft_strlen(set);
	c = 0;
	while (s_count > 0)
	{
		while (s[s_count - 1] != set[c])
		{
			c++;
			if (set_count == c)
				return (s_count - 1);
		}
		c = 0;
		s_count--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*set1;
	char	*new_str;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s = (char *)s1;
	set1 = (char *)set;
	if (*set == '\0')
		return (ft_strdup(s1));
	start = start_trim(s, set1);
	end = ft_strlen(s1) - end_trim(s, set1);
	if (ft_strlen(s1) == end)
		return (ft_strdup(""));
	new_str = malloc(sizeof(char) * (ft_strlen(s1) - (start + end) + 2));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, &s[start], (ft_strlen(s1) - (start + end) + 2));
	return (new_str);
}
