/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:26:39 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:26:42 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Frees memory and sets the pointer to NULL.
 *
 * This function frees the memory pointed to by the given
 * pointer and sets it to NULL to avoid dangling pointers.
 *
 * @param prt A pointer to a void pointer.
 */
void	ft_memdel(void **prt)
{
	if (prt && *prt)
	{
		free(*prt);
		*prt = NULL;
	}
}
