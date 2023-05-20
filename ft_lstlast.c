/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccarva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:23:08 by luccarva          #+#    #+#             */
/*   Updated: 2023/04/26 22:23:11 by luccarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}
/*
int main()
{
        t_list  *lst;
        t_list  *new;
        t_list  *new2;
        t_list  *last;

        lst = ft_lstnew("Ola");
        new = ft_lstnew("mundo");
        new2 = ft_lstnew("mundo2");

        ft_lstadd_front(&lst->next, new);
        ft_lstadd_front(&lst->next->next, new2);
        last = ft_lstlast(lst);
        printf("\tLast value: %s",(char *)last->content);
        return (0);

    printf ("\tstring node 1: %s\n",(char *)lst->content);
    printf ("\tstring node 2: %s\n",(char *)lst->next->content);
    printf ("\tstring node 3: %s\n",(char *)lst->next->next->content);
    printf ("\tsize: %d\n", ft_lstsize(new));
    printf ("\tsize: %d\n", ft_lstsize(lst));
    printf ("\tsize: %d\n", ft_lstsize(lst));
    return (0);
}
*/
