/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:26:59 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:30:58 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for a memory block within another.
 *
 * This function locates the first occurrence of the
 * byte sequence needle in the memory area haystack.
 *
 * @param haystack The memory area to search in.
 * @param haystacklen The length of haystack.
 * @param needle The sequence to search for.
 * @param needlelen The length of needle.
 * @return A pointer to the match, or NULL if not found.
 */
void	*ft_memmem(const void *haystack, size_t haystacklen,
	const void *needle, size_t needlelen)
{
	const unsigned char	*h;
	const unsigned char	*n;
	size_t				i;
	size_t				j;

	h = (const unsigned char *)haystack;
	n = (const unsigned char *)needle;
	if (needlelen == 0)
		return ((void *)haystack);
	i = 0;
	while (i + needlelen <= haystacklen)
	{
		j = 0;
		while (j < needlelen && h[i + j] == n[j])
			j++;
		if (j == needlelen)
			return ((void *)(h + i));
		i++;
	}
	return (NULL);
}
