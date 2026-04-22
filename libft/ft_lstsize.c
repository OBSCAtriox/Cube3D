/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:30:23 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:22:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of nodes in a list.
 * 
 * This function iterates through the list and returns
 * the total number of nodes.
 * 
 * @param lst The list to count.
 * @return The number of nodes in the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

//int     main(void)
//{       
//        t_list  *lista = NULL;
//        t_list  *n1;
//        t_list  *n2;
//        
//        n1 = ft_lstnew(ft_strdup("Nó 1"));
//        n2 = ft_lstnew(ft_strdup("Nó 2"));
//        ft_lstadd_front(&lista, n1);
//        ft_lstadd_front(&lista, n2);
//        t_list  *temp = lista;
//        ft_lstsize(temp);
//        printf("Tamanho da lista: %d\n", ft_lstsize(temp));
//        ft_lstclear(&lista, free);
//        return (0);
//}
