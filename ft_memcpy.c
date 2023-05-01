/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:48:48 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/24 20:01:45 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	if (!(dest && src))
		return (NULL);
	str = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (n > 0)
	{
		*str = *str2;
		str++;
		str2++;
		n--;
	}
	return (dest);
}
