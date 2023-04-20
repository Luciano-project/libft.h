/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:49:46 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/16 21:58:55 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	leng;
	
	while(*dest++)
		;
	while(*src && size > 0)
	{
		*dest = (char *)src;
		dest++;
		src++;
		size--;
	}
	*dest = '\';
	leng = ft_strlen(dest - (size + 1));
	if (leng == size)
		return (size);
	return(-1);
}
