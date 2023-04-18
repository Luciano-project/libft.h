/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:41:58 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/16 19:11:26 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main()
{
	char	*s[5];

	s[0] = "string";
	s[1] = "str";
	s[2] = "";
	s[3] = "a";
	s[4] = "1234567890";

	for (int i = 0; i < 5; i++)
	{
		printf("string: %s\n", s[i]);
		printf("\toriginal: %lu\n", strlen(s[i]));
		printf("\t    mine: %lu\n\n", ft_strlen(s[i]));
	}
}
