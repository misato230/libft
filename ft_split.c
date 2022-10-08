/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:27:16 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/30 10:25:29 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(const char *str, char c)
{
	size_t	i;
	size_t	word_total;

	i = 0;
	word_total = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		if (str[i + 1] == c || str[i + 1] == '\0')
			word_total++;
		i++;
	}
	return (word_total);
}

static void	**free_mem(char **split_str)
{
	size_t	i;

	i = 0;
	while (split_str[i])
	{
		free(split_str[i]);
		i++;
	}
	free(split_str);
	return (NULL);
}

static size_t	word_split(const char *s1, char c, size_t *word_head)
{
	size_t	i;
	size_t	j;
	size_t	now_len;

	now_len = 0;
	i = *word_head;
	j = 0;
	while (*(s1 + i) && *(s1 + i) == c)
		i++;
	*word_head = i;
	j = j + i;
	while (*(s1 + j) && *(s1 + j) != c)
		j++;
	now_len = j - i;
	return (now_len);
}

static void	put_words(char **split_str, char *s, char c)
{
	size_t	word_head;
	size_t	now_len;
	size_t	i;

	now_len = 0;
	word_head = 0;
	i = 0;
	while (i < str_count(s, c))
	{
		now_len = word_split(s, c, &word_head);
		split_str[i] = malloc (sizeof(char) * (now_len + 1));
		if (!split_str[i])
			free_mem (split_str);
		ft_strlcpy(split_str[i], s + word_head, now_len + 1);
		word_head += now_len;
		i++;
	}
	split_str[i] = NULL;
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	**split_str;

	if (s == NULL)
		return (NULL);
	split_str = malloc(sizeof(char *) * (str_count((char *)s, c) + 1));
	if (!split_str)
		return (NULL);
	put_words(split_str, (char *)s, c);
	return (split_str);
}
