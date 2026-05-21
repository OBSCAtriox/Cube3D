/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vetor_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:34:30 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 20:26:36 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a null-terminated string array.
 *
 * This function allocates and returns a copy of the
 * given string array, duplicating each element.
 *
 * @param vetor The array to duplicate.
 * @return The duplicated array, or NULL on failure.
 */
char	**ft_vetor_dup(char **vetor)
{
	size_t	size;
	char	**out;
	int		i;

	i = 0;
	if (!vetor)
		return (NULL);
	size = ft_size_vetor(vetor);
	out = malloc(sizeof(char *) * (size + 1));
	if (!out)
		return (NULL);
	while (vetor[i])
	{
		out[i] = ft_strdup(vetor[i]);
		if (!out[i])
		{
			ft_free_failed_vector(&out, i);
			return (NULL);
		}
		i++;
	}
	out[i] = NULL;
	return (out);
}
