/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:21:59 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/26 22:22:02 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cwords(const char *str, char c)
{
	int	counter;
	int	i;
	int	occ;

	occ = 0;
	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != c && occ == 0)
		{
			occ = 1;
			counter++;
		}
		else if (str[i] == c)
			occ = 0;
		i++;
	}
	return (counter);
}

static char	*slicpy(const char *s, int cnt)
{
	char	*slice;

	slice = ft_memcpy(malloc((cnt + 1) * sizeof(char)), (s - cnt), cnt);
	if (!slice)
		return (NULL);
	slice[cnt + 1] = '\0';
	return (slice);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		cnt;
	int		j;

	j = 0;
	str = malloc((cwords(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		cnt = 0;
		while (*s != c && *s)
		{
			cnt++;
			s++;
		}
		if (cnt > 0)
			str[j++] = slicpy(&(*s), cnt);
		if (*s == '\0')
			break ;
		s++;
	}
	str[j] = 0;
	return (str);
}
