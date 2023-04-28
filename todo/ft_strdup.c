/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:18:37 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/26 22:18:50 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	counter;
	
	counter = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(char) * counter);
	if (!(str))
		return (NULL);
	str[counter] = '\0';
	while(counter--)
		str[counter] = s[counter];
	return (str);
}