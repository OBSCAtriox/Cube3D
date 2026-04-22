/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:38:16 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:22:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two memory areas.
 * 
 * This function compares the first n bytes of the memory
 * areas s1 and s2, returning the difference between the
 * first differing bytes.
 * 
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of bytes to compare.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				a;
	const unsigned char	*u_s1;
	const unsigned char	*u_s2;

	a = 0;
	u_s1 = (const unsigned char *) s1;
	u_s2 = (const unsigned char *) s2;
	while (a < n)
	{
		if (u_s1[a] != u_s2[a])
			return (u_s1[a] - u_s2[a]);
		a++;
	}
	return (0);
}

/*int     main(void)
{
        int     str1[] = {1,2,3,15,5,6};
        int     str2[] = {1,2,3,4,5,6};
        int     z = 6;

        printf("%d vs %d", memcmp(str1, str2, z * sizeof(int)),
	ft_memcmp(str1, str2, z * sizeof(int)));
        return (0);
}*/
