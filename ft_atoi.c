/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:48:04 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/16 21:58:15 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num[2];
	
	num[0] = 0; // value to be returned
	num[1] = 1; // value to change signal
	while (((*nptr >= 7 && *nptr <= 13) || (*nptr == 32)) || (*nptr == '-' || *nptr == '+'))
		{
			if (!(ft_isdigit(*(nptr + 1)) && num[0] == 0))
				return (0);
			if (*nptr == '-')
				num[1] *= -1;
			else if (*nptr == '+')
				num[1] *= 1;
			nptr++;
		}
	while (*nptr)
	{
		if (!ft_isdigit(*nptr))
			return ((num[1] * num[0]) / 10);
		else
			num[0] = (num[0] + (((const char ) *nptr) - '0')) * 10;
		nptr++;
	}
	return ((num[1] * num[0]) / 10);
}
