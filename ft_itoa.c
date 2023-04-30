/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:30:41 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/30 17:12:05 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size_int(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		leng;
	int		sign;

	leng = get_size_int(n);
	sign = 1;
	if (leng < 0)
	{
		sign = -1;
		leng = (sign * leng) + 1;
	}
	str = malloc(sizeof(char) * (leng + 1));
	if (!(str))
		return (NULL);
	str[leng] = '\0';
	while (leng > 0)
	{
		str[--leng] = (sign * (n % 10) + '0');
		n = n / 10;
	}
	if (sign == -1)
	str[0] = '-';
	return (str);
}

static int	get_size_int(int n)
{
	int	sign;
	int	counter;

	sign = 1;
	counter = 0;
	if (n < 0)
		sign = -1;
	while ((n > 9) || ((n < -9)))
	{
		n = n / 10;
		counter++;
	}
	return (sign * (counter +1));
}
