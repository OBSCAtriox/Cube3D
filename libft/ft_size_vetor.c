/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_vetor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:31:49 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:11:40 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of strings in a vector.
 *
 * This function returns the number of elements in a
 * null-terminated array of strings.
 *
 * @param vetor The string array to count.
 * @return The number of strings in the array.
 */
size_t	ft_size_vetor(char **vetor)
{
	size_t	i;

	i = 0;
	if (!vetor)
		return (i);
	while (vetor[i])
		i++;
	return (i);
}
