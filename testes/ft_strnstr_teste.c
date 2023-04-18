/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_teste.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:58:23 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/18 21:41:07 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main()
{

	const char* haystack = "The quick brown fox jumps over the lazy dog.";
	const char* needle = "over";
	//size_t len = ft_strlen(haystack);	

	printf("Original: %s\n",strnstr1(haystack, needle, 10));
	printf("Mine	: %s\n",ft_strnstr(haystack, needle, 10));
	
	return (0);

}
