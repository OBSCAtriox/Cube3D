/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 20:09:31 by thiago            #+#    #+#             */
/*   Updated: 2026/04/22 17:18:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Frees four memory pointers and sets them to NULL.
 *
 * This function calls ft_memdel on each provided pointer, freeing
 * the allocated memory they point to and setting them to NULL.
 *
 * @param prt1 The first pointer to be freed.
 * @param prt2 The second pointer to be freed.
 * @param prt3 The third pointer to be freed.
 * @param prt4 The fourth pointer to be freed.
 */
void	ft_clean_4(void **prt1, void **prt2, void **prt3, void **prt4)
{
	ft_memdel(prt1);
	ft_memdel(prt2);
	ft_memdel(prt3);
	ft_memdel(prt4);
}
