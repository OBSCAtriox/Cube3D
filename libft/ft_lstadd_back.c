/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:26:28 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:20:45 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds a node to the end of a list.
 * 
 * This function adds the given node to the end of the list.
 * If the list is empty, the node becomes the first element.
 * 
 * @param lst A pointer to the list.
 * @param new The node to add.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int     main(void)
{
        t_list  *n1;
        t_list  *n2;
        t_list  *n3;
        int     len;

        n1 = ft_lstnew("Nó 1");
        n2 = ft_lstnew("Nó 2");
        n3 = ft_lstnew("Nó 3");
        ft_lstadd_back(&n1, n2);
        ft_lstadd_back(&n1, n3);
        t_list  *ultimo = ft_lstlast(n1);
        len = ft_lstsize(n1);
        printf("Tamanho da lista: %d\n", len);
        printf("Último nó da lista: %s\n",(char *)(ultimo->content));
        return (0);
}*/
