/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:49:37 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/18 22:46:42 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: The strlcpy() function copies up to size - 1 characters from the
string src to dst, NUL-terminating the result if size is not 0.  The source and
destination strings should not overlap, as the behavior is undefined. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size > 0)
	{
		while ((size - 1) > counter && src[counter])
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
	while (src[counter])
		counter++;
	return (counter);
}
