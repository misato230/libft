/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:50:05 by satoumiu          #+#    #+#             */
/*   Updated: 2022/10/08 18:42:41 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size != 0 && (n > SIZE_MAX / size))
		return (NULL);
	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	p = malloc(size * n);
	if (!p)
		return (NULL);
	ft_bzero(p, size * n);
	return (p);
}
