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

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	unsigned int	counter;

	counter = 0;
	while (size > 0)
	{
		dst[counter] = src[counter];
		size--;
	}
	n = strlen(dst)
	if (*dst != NULL)
	{
		++dest = '\0';
		return (n);
	}
}
