/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:47:50 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/18 21:43:44 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h;
	const char	*n;

	if (*needle == '\0' || needle == 0)
		return ((char *) haystack);
	while (*haystack && len > 0)
	{
		h = haystack;
		n = needle;
		while (*n == *h && len > 0)
		{
			if (*n == '\0')
				return ((char *) haystack);
			n++;
			h++;
			len--;
		}
		haystack++;
	}
	return (NULL);
}
