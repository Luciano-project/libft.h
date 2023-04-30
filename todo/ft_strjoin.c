/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:20:24 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/30 17:58:58 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	unsigned int	leng;

	if (!s1 || !s2)
		return (NULL);
	leng = ft_strlen(s2) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * (leng + 1));
	if (!str)
		return (NULL);
	//while
}
