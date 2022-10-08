/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoumiu <satoumiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:47:27 by satoumiu          #+#    #+#             */
/*   Updated: 2022/08/28 21:04:37 by satoumiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	min_max(int sign)
{
	if (sign == 1)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

int	ft_atoi(const	char *str)
{
	int		sign;
	long	nbr;

	nbr = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*str))
	{
		if (nbr > LONG_MAX / 10)
			return (min_max (sign));
		if (nbr == LONG_MAX / 10 && LONG_MAX % 10 < *str - '0')
			return (min_max (sign));
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);
}
