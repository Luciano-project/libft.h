/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:48:04 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/16 21:58:15 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	
	num = 0;
	while (*nptr)
	{
		num += ((const char ) *nptr) - '0';
		num *= 10;
		nptr++;
	}
	//printf("%d",num);
	return (num / 10);
}

int	main(int argc, const char **argv)
{
	const char *string;
	
	string = argv[argc-1];
	//printf("%s",string);
	printf("%d\n",ft_atoi(string));
	return (0);
}
