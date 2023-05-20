/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:24:20 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/26 22:24:23 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*
int main()
{
	t_list  *lst;
	t_list  *new;
	t_list  *new2;
	t_list	*var;

	lst = ft_lstnew("Ola");
	new = ft_lstnew("mundo");
	new2 = ft_lstnew("mundo2");

	ft_lstadd_front(&lst->next, new);
	ft_lstadd_front(&lst->next->next, new2);
	
	var = lst;
	ft_lstdelone(*new, ft_del);
	//printf ("\tstring node 1: %s\n",(char *)lst->content);
	var = lst;
	while (var)
	{
		printf("\tnode content: %s\n",(char *)var->content);
		var = var->next;
	}
	//printf ("\tsize: %d\n", ft_lstsize(new));
	//printf ("\tsize: %d\n", ft_lstsize(lst));
	//printf ("\tsize: %d\n", ft_lstsize(lst));
	return (0);
}
*/
