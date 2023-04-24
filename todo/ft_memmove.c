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

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;

	dst = dest;
	sr = src;
	if (dest == src)
		return (dest);
	while (n > 0)
	{
		*dst = *sr;
		n--;
	}
	return (0);
}
