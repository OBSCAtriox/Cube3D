/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 20:37:46 by thiago            #+#    #+#             */
/*   Updated: 2026/04/22 17:18:47 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Frees two memory pointers and sets them to NULL.
 *
 * This function calls ft_memdel on both provided pointers, freeing
 * the allocated memory they point to and setting them to NULL.
 *
 * @param prt1 The first pointer to be freed.
 * @param prt2 The second pointer to be freed.
 */
void	ft_clean_2(void **prt1, void **prt2)
{
	ft_memdel(prt1);
	ft_memdel(prt2);
}
