/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vetor_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:34:30 by thde-sou          #+#    #+#             */
/*   Updated: 2026/03/30 11:12:45 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
