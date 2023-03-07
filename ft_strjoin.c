/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:01:24 by satoumiu          #+#    #+#             */
/*   Updated: 2023/03/07 16:00:02 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	src1;
	size_t	src2;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	src1 = ft_strlen(s1);
	src2 = ft_strlen(s2);
	new_str = malloc(sizeof(char) * (src1 + src2 + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, src1 + 1);
	ft_strlcat(new_str, s2, (src1 + src2 + 1));
	return (new_str);
}
