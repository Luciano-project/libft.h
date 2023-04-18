/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:47:50 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/16 23:13:08 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t int	counter1;
	size_t int      counter2;

	counter1 = 0;
	counter2 = 0;
	while (big[counter1] < len && little[counter2] != '\0')
	{	
		if (big[counter1] == little[counter2])
			counter2++;
		else
			counter2 = 0;
		counter1++;
	}
	
}
