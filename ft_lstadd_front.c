/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:23:52 by luccarva          #+#    #+#             */
/*   Updated: 2023/05/16 22:52:56 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
    printf ("\tsize: %d\n", ft_lstsize(new));
    printf ("\tsize: %d\n", ft_lstsize(lst));
    printf ("\tsize: %d\n", ft_lstsize(lst));
    return (0);
}
*/