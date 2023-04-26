/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:49:21 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/26 21:44:08 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;
	size_t			counter;

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
