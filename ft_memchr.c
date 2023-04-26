/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:47:11 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/24 19:20:46 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return: a pointer to the byte located, 
or NULL if no such byte exists within n bytes.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char) c)
			return ((void *)str);
		n--;
		str++;
	}
	return (NULL);
}
