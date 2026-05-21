/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:09:52 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:55:03 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the
 * character c in the string s, including the null terminator.
 *
 * @param s The string to search.
 * @param c The character to find.
 * @return A pointer to the character, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int				a;
	char			*str;
	unsigned char	uc;

	uc = c;
	str = (char *)s;
	a = ft_strlen(str);
	while (a >= 0)
	{
		if (str[a] == uc)
			return (&str[a]);
		a--;
	}
	if (uc == '\0')
		return (&str[a]);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "abecbdef";
	char	*prt1;
	char	*prt2;
	char	letra = 'j';

	prt1 = strrchr(str, letra);
	prt2 = ft_strrchr(str, letra);

	printf("%s vs %s", prt1, prt2);
	return (0);
}*/
