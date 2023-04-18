/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:35:45 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/18 20:04:33 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main()
{
	char	*s[5];

	s[0] = "strin-4";
	s[1] = "ststr";
	s[2] = "";
	s[3] = "ar";
	s[4] = "12345r67890";

	for (int i = 0; i < 5; i++)
	{
		printf("string: %s\n", s[i]);
		printf("\toriginal: %s\n", strrchr(s[i],'\0'));
		printf("\t    mine: %s\n\n", ft_strrchr(s[i],'\0'));
	}

	return (0);
}
