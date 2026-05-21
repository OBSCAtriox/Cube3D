/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:33:52 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:54:09 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates a substring within a string with a length limit.
 *
 * This function searches for the first occurrence of the
 * substring little in big, examining at most len characters.
 *
 * @param big The string to search in.
 * @param little The substring to find.
 * @param len The maximum number of characters to search.
 * @return A pointer to the match, or NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	if (*little == '\0')
		return ((char *)big);
	a = 0;
	while (big[a] != '\0' && a < len)
	{
		b = 0;
		while ((a + b) < len && big[a + b] == little[b] && little[b] != '\0')
			b++;
		if (little[b] == '\0')
			return ((char *)&big[a]);
		a++;
	}
	return (NULL);
}

/*int   main(void)
{
        char    str[] = "ola, bom boem dia";
        char    str1[] = "boe";
        int     a = 11;

        printf("%s", ft_strnstr(str, str1, a));
        return (0);
}*/
