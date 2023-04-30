/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:19:07 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/30 17:36:29 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size_s;
	char			*sub_str;

	start--;
	len--;
	size_s = 0;
	if (!(s))
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	sub_str = malloc(sizeof(char) * (len + 1));
	while (s[start] && size_s <= len)
	{
		sub_str[size_s] = s[start];
		size_s++;
		start++;
	}
	sub_str[size_s] = '\0';
	return (sub_str);
}
