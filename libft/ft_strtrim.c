/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 04:17:35 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:56:22 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	beginning(char const *str, char const *prt)
{
	size_t	a;
	size_t	b;
	size_t	found;

	a = 0;
	found = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (prt[b] != '\0')
		{
			if (str[a] == prt[b])
			{
				found += 1;
				break ;
			}
			else
				b++;
		}
		a++;
		if (prt[b] == '\0')
			break ;
	}
	return (found);
}

static int	end(char const *str, char const *prt)
{
	int		a;
	size_t	b;
	size_t	found;

	a = ft_strlen(str) - 1;
	found = 0;
	while (a >= 0)
	{
		b = 0;
		while (prt[b] != '\0')
		{
			if (str[a] == prt[b])
			{
				found += 1;
				break ;
			}
			else
				b++;
		}
		a--;
		if (prt[b] == '\0')
			break ;
	}
	return (ft_strlen(str) - found);
}

/**
 * Trims characters from the beginning and end of a string.
 *
 * This function allocates and returns a copy of s1 with all
 * characters from set removed from both ends.
 *
 * @param s1 The string to trim.
 * @param set The set of characters to remove.
 * @return The trimmed string, or NULL on failure.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		idx1;
	int		idx2;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	idx1 = beginning(s1, set);
	idx2 = end(s1, set);
	if (idx1 > idx2)
		return (ft_strdup(""));
	len = idx2 - idx1 + 1;
	if (len <= (size_t)(idx2 - idx1))
		return (NULL);
	str = malloc(len);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + idx1, idx2 - idx1);
	str[idx2 - idx1] = '\0';
	return (str);
}

/* int     main(void)
{
        const char      *str = "*hello";
        const char      *set = "*";
        char    *res;
        size_t  a = 0;

        res = ft_strtrim (str, set);
        while (a < ft_strlen(res) + 1)
        {
                printf("%c ", res[a]);
                a++;
        }
        printf("\ntamanho de res: %zu", ft_strlen(res));
        free(res);
        return (0);
} */