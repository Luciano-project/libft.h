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

static char	**slicing(char **str, const char *s, char c, int words)
{
	size_t	counter;
	size_t	start;
	size_t	i;
	char	*substr;

	counter = 0;
	start = 0;
	printf("%ld\n", counter);
	while(*s)
	{
		i = 0;
		if (*s != c && s + 1 != 0)
		{
			substr = malloc((sizeof(char) * (counter)) + 1);
			if (!substr)
				return (NULL);
			while (counter > 0)
			{
				if (*s != c)
					*substr++ = *(s - counter);
				counter--;
			}
			printf("tamanho %ld\n", ft_strlen(substr));
			substr[i] = 0;
			printf("\tcounter: %ld\n\tstart: %ld\n", counter, start);
			printf("%s\n", substr);
			*str++ = substr;
		}
		counter++;
		s++;
	}
	return (str - words);
}
/*	size_t	counter;
	int		words;
	int		occurrences;
	int		start;
	int		end;

	occurrences = 0;
	words = 0;
	counter = -1;
	start = 0;
	end = 0;
	while (s[++counter])
	{
		if (s[counter] != c && occurrences == 0)
			{
				occurrences = 1;
				start = counter;
			}
		else if (s[counter] == c)
		{
			occurrences = 0;
			end = counter;
			str[words] = ft_substr(s, start, end - start);
			words++;
		}
	}
	return (str);*/

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		words;

	words = cwords(s, c);
	printf("%ld\n", (((sizeof(char *)) * words) + 1)); // OK
	str = malloc(((sizeof(char *)) * words) + 1);
	if (!str)
		return (NULL);
	str[words] = 0;
	return (slicing(str, s, c, words));
}

int	main()
{
	char	**st;
	int		counter;

	counter = -1;
	st = ft_split("hola que ", ' ');
	while (st[++counter])
		printf("%s||||||\n", st[counter]);
	return (0);
}