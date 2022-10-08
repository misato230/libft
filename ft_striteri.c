/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:24:11 by satoumiu          #+#    #+#             */
/*   Updated: 2022/10/08 18:46:35 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			s_len;

	if (!s || !f)
		return ;
	i = 0;
	s_len = ft_strlen((char *)s);
	while (s_len != i)
	{
		f(i, &s[i]);
		i++;
	}
}
