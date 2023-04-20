/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:41:58 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/18 19:24:54 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main()
{
	char	*s[5];

	s[0] = "string";
	s[1] = "ststr";
	s[2] = "";
	s[3] = "r";
	s[4] = "12345r67890";

	for (int i = 0; i < 5; i++)
	{
		printf("string: %s\n", s[i]);
		printf("\toriginal: %s\n", strchr(s[i],'\0'));
		printf("\t    mine: %s\n\n", ft_strchr(s[i],'\0'));
	}
}