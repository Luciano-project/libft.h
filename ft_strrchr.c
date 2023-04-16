/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:46:39 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/16 22:05:31 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;

	while (s[counter++]);
	while (counter-- >= 0)
	{
		if (s[counter] == (unsigned char)c)
			return (&((char *)s)[counter]);	
	}
	return (NULL);
}
