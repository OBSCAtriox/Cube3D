/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:48:59 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:19:21 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Frees a null-terminated string vector.
 * 
 * This function frees each string in the vector until a NULL
 * pointer is found, then frees the vector itself and sets it to NULL.
 * 
 * @param vector A pointer to the string array to be freed.
 */
void	ft_free_vector(char ***vector)
{
	int	i;

	if (!vector || !*vector)
		return ;
	i = 0;
	while ((*vector)[i])
	{
		free((*vector)[i]);
		(*vector)[i] = NULL;
		i++;
	}
	free(*vector);
	*vector = NULL;
}
