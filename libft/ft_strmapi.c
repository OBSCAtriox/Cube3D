/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:42:47 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:47:05 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new string by applying a function to each character.
 * 
 * This function allocates a new string where each character
 * is the result of applying the function to the original string.
 * 
 * @param s The string to iterate over.
 * @param f The function applied to each character.
 * @return The new string, or NULL on failure.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*new_str;
	size_t		len_s;
	size_t		a;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s + 1 <= len_s)
		return (NULL);
	new_str = malloc((len_s + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	a = 0;
	while (a < len_s)
	{
		new_str[a] = f(a, s[a]);
		a++;
	}
	new_str[a] = '\0';
	return (new_str);
}

/* char	to_upper(unsigned int c, char s)
{
	(void)c;
	if (s >= 'a' && s <= 'z')
		return (s - 32);
	return (s);
} */

/* char    to_upper(unsigned int c, char s);

int     main(void)
{
    char    *str = "abCd";
    str = ft_strmapi(str, to_upper);
    printf("%s\n", str);
    free(str);
    return (0);
} */