/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:20:26 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:39:34 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a memory area with a byte value.
 *
 * This function sets the first n bytes of the memory area
 * pointed to by s to the specified byte value.
 *
 * @param s The memory area to fill.
 * @param c The byte value to set.
 * @param n The number of bytes to set.
 * @return The pointer to the memory area.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	a;
	unsigned char		uc;

	uc = (unsigned char) c;
	a = 0;
	while (a < n)
	{
		((unsigned char *)s)[a] = uc;
		a++;
	}
	return (s);
}

/*int	main(void)
{
	int	a;
	char	str1[10] = "abcdefghi";
	char    str2[10] = "abcdefghi";

	a = 0;
	ft_memset(str1, 'a', 3);
	memset(str2, 'a', 3);
	while (a < 10)
	{
		printf("%d ", str1[a]);
		a++;
	}
	a = 0;
	printf("\n");
	while (a < 10)
	{
		printf("%d ", str2[a]);
		a++;
	}       
	return (0);
}*/
