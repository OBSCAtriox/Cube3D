/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:30:36 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:22:46 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Search for a byte in a memory area.
 * 
 * This function scans the first n bytes of the memory area
 * pointed to by s for the first occurrence of c.
 * 
 * @param s The memory area to search.
 * @param c The byte to search for.
 * @param n The number of bytes to examine.
 * @return A pointer to the matching byte, or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	uc;
	unsigned char	*us;

	a = 0;
	us = (unsigned char *)s;
	uc = c;
	while (a < n)
	{
		if (us[a] == uc)
			return (&us[a]);
		a++;
	}
	return (NULL);
}

/*int     main(void)
{
        char    *str = "banana";
        char    c = 'n';
        int     d = 3;
        char    *prt1 = memchr(str, c, d);
        char    *prt2 = ft_memchr(str, c, d);

        printf("%s vs %s", prt1, prt2);
        return (0);
}*/
