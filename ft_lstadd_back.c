/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:23:35 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/26 22:23:45 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int main()
{
    t_list  *lst;
    t_list  *new;
    t_list  *new2;

    lst = ft_lstnew("Ola");
    new = ft_lstnew("mundo");
    new2 = ft_lstnew("mundo2");

    ft_lstadd_front(&lst->next, new);
    ft_lstadd_front(&lst->next->next, new2);
    printf ("\tstring node 1: %s\n",(char *)lst->content);
    printf ("\tstring node 2: %s\n",(char *)lst->next->content);
    printf ("\tstring node 3: %s\n",(char *)lst->next->next->content);
    //printf ("\tsize: %d\n", ft_lstsize(new));
    //printf ("\tsize: %d\n", ft_lstsize(lst));
    //printf ("\tsize: %d\n", ft_lstsize(lst));
    return (0);
}
*/
