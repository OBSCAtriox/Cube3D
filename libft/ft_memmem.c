/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:00:20 by thiago            #+#    #+#             */
/*   Updated: 2026/03/21 21:43:10 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
