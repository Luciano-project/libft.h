/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:46:23 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/18 19:33:46 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = -1;
	while (s[++counter])
	{
		if (s[counter] == (unsigned char)c)
			return (&((char *)s)[counter]);
	}
	if ((unsigned char)c == s[counter])
		return (&((char *)s)[counter]);
	return (NULL);
}
