/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:57:18 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:28:56 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a string.
 *
 * This function allocates memory and creates a copy
 * of the given string.
 *
 * @param s The string to duplicate.
 * @return The duplicated string, or NULL on failure.
 */
char	*ft_strdup(const char *s)
{
	int		a;
	char	*nova;

	nova = malloc(ft_strlen(s) + 1);
	if (nova == NULL)
		return (NULL);
	a = 0;
	while (s[a] != '\0')
	{
		nova[a] = s[a];
		a++;
	}
	nova[a] = '\0';
	return (nova);
}

/* int	main(void)
{
	char	*string;
	char	*c;

	string = "abcd";
	c = ft_strdup(string);
	printf("%s\n", c);
    free(c);
	return (0);
} */
