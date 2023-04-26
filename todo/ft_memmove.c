/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:49:21 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/24 23:43:51 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* memmove: copies n bytes from memory area src to memory area dest. The
 * memory areas may overlap: copying takes place as though the bytes in src are
 * first copied into a temporary array that does not overlap src or dest, and
 * the bytes are then copied from the temporary array to dest. The memmove()
 * function returns the original value of dest.
*/
//#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;
	size_t				counter;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	counter = 0;

	if (dst > sr)
	{
		while (n > 0)
		{
			n--;
			dst[n] = sr[n];
		}
	}
	else
	{
		while (n > counter)
		{
			dst[counter] = sr[counter];
			counter++;
		}
	}
	return (dest);
}