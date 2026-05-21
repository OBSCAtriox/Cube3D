/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:26:38 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:50:53 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two strings up to a given length.
 *
 * This function compares the first n characters of s1 and s2,
 * returning the difference between the first differing characters.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n The number of characters to compare.
 * @return An integer less than, equal to, or greater than zero.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (s1[a] != s2[a] || s1[a] == '\0' || s2[a] == '\0')
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		a++;
	}
	return (0);
}

/*int     main(void)
{
        char    *str1 = "banna";
        char    *str2 = "baNa";
        int     b = 2;

        printf("%d vs %d", strncmp(str1, str2, b), ft_strncmp(str1, str2, b));
        return (0);
}*/
