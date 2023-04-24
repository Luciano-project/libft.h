/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:48:04 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/24 21:40:00 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num[2];

	num[0] = 0;
	num[1] = 1;
	while (((*nptr >= 7 && *nptr <= 13) || (*nptr == 32)))
	{
		nptr++;
	}
	if (*nptr == '-')
		num[1] = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr)
	{
		if (!(ft_isdigit(*nptr)))
			return ((num[1] * num[0]) / 10);
		else
			num[0] = (num[0] + (((const char ) *nptr) - '0')) * 10;
		nptr++;
	}
	return ((num[1] * num[0]) / 10);
}
