/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:00:36 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:23:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a character in a string.
 * 
 * This function searches for the first occurrence of the
 * character c in the string s, including the null terminator.
 * 
 * @param s The string to search.
 * @param c The character to find.
 * @return A pointer to the character, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int				a;
	char			*str;
	unsigned char	uc;

	uc = c;
	a = 0;
	str = (char *)s;
	while (str[a] != '\0')
	{
		if (str[a] == uc)
			return (&str[a]);
		a++;
	}
	if (uc == '\0')
		return (&str[a]);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "abcdef";
	char	*prt1;
	char	*prt2;
	char	letra = 'f';

	prt1 = strchr(str, letra);
	prt2 = ft_strchr(str, letra);

	printf("%s vs %s", prt1, prt2);
	return (0);
}*/
