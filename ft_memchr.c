/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:40:11 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/27 19:23:12 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*array;

	i = 0;
	array = (unsigned char *)buf;
	while (i != n)
	{
		if (array[i] == (unsigned char) ch)
			return (&array[i]);
		i++;
	}
	return (NULL);
}
