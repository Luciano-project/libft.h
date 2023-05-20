/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:21:59 by luccarva          #+#    #+#             */
/*   Updated: 2023/05/13 13:17:02 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cwords(const char *s, char c)
{
	size_t	counter;
	int		words;
	int		occurrences;

	occurrences = 0;
	words = 0;
	counter = -1;
	while (s[++counter])
	{
		if (s[counter] != c && occurrences == 0)
		{
			occurrences = 1;
			words++;
		}
		else if (s[counter] == c)
			occurrences = 0;
	}
	return (words);
}

static char	*subst(const char *s, int i, int start)
{
	char	*st;
	int		idx;

	idx = 0;
	st = malloc((sizeof(char) * (i - start + 1)));
	if (!st)
		return (NULL);
	while (start < i)
		st[idx++] = s[start++];
	st[idx] = '\0';
	return (st);
}

static char	**slicing(char **str, const char *s, char c, size_t counter)
{
	int		start;
	size_t	idx;

	idx = 0;
	start = -1;
	while (counter <= ft_strlen(s))
	{
		if (s[counter] != c && start < 0)
			start = counter;
		else if ((s[counter] == c || counter == ft_strlen(s)) && start >= 0)
		{	
			str[idx++] = subst(s, counter, start);
			start = -1;
		}
		counter++;
		str[idx] = 0;
	}
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((sizeof(char *)) * (cwords(s, c) + 1));
	if (!str)
		return (NULL);
	return (slicing(str, s, c, 0));
}
