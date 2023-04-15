/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:45:34 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/15 23:47:24 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int tolower(int c);

int ft_tolower(unsigned int c)
{
	if (c >='A' && c <= 'Z')
		return (c + 32); 
	return (c);
}

int	main()
{
	//char	c;
	int		foo;
	int		ft;

	//c = '0';
	foo = tolower('È');
	ft = ft_tolower('È');
	printf("__________________\n");
	//printf("\nnumero: %d\n",i);
	printf("\texpected: %d\n", foo);
	printf("\t     got: %d\n", ft);
	//printf("__________________\n");
	return (0);
}
