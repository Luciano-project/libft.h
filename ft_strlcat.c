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
	size_t	counter;
	
	counter = 0;
	leng = ft_strlen(dest);
	if (size <= leng)
		return (size + ft_strlen(src));
	while(src[counter] != 0 && size > 0)
	{
		dest[counter + leng] = src[counter];
		size--;
	}
	dest[counter] = 0;
	return(counter + leng + ft_strlen(&(src[counter])));
}
