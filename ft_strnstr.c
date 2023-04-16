/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:47:50 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/17 00:42:18 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char* haystack, const char* needle, size_t len)
{
	size_t	counter1;
	size_t	counter2;
	size_t	p;

	counter1 = 0;
	counter2 = 0;
	p = 0;
	while (counter1 < len && needle[counter2] != '\0')
	{	
		if (haystack[counter1] == needle[counter2])
		{
			counter2++;
			p = counter2;
		}
		else
		{
			counter2 = 0;
			p = 0;
		}
		counter1++;
	}
	if (p == 0 && counter2 == 0)
		return ((char*)haystack + counter1);
	return ((char *)haystack + (p - 1));
}
