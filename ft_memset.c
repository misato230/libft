/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:24:38 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/30 09:47:38 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
