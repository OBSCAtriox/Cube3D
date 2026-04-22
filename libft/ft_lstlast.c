/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:26:53 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:22:09 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns the last node of a list.
 * 
 * This function traverses the list and returns the last node.
 * Returns NULL if a list is empty.
 * 
 * @param lst The list to search.
 * @return The last node, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int     main(void)
{
        t_list  *lista = NULL;
        t_list  *n1;
        t_list  *n2;
        t_list  *n3;

        n1 = ft_lstnew(ft_strdup("Nó 3"));
        n2 = ft_lstnew(ft_strdup("Nó 2"));
        n3 = ft_lstnew(ft_strdup("Nó 1"));
        ft_lstadd_front(&lista, n1);
        ft_lstadd_front(&lista, n2);
        ft_lstadd_front(&lista, n3);
        t_list  *ultimo = ft_lstlast(lista);
        printf("Último nó da lista: %s\n",(char *)(ultimo->content));
        ft_lstclear(&lista, free);
        return (0);
} */
