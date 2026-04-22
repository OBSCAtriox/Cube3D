/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:55:29 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:31:59 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function to each character of a string.
 *
 * This function iterates over the string and applies
 * the given function to each character with its index.
 *
 * @param s The string to iterate over.
 * @param f The function applied to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	a;

	if (!s || !f)
		return ;
	a = 0;
	while (s[a] != '\0')
	{
		f(a, &s[a]);
		a++;
	}
}

/*void    capitalize(unsigned int a, char *c)
{
        if (a % 2 == 0 && *c >= 'a' && *c <= 'z')
                *c = *c - 32;
}*/

/*void    capitalize(unsigned int a, char *c);

int     main(void)
{
        char    str[] = "abcd";

        ft_striteri(str, capitalize);
        printf("%s\n", str);
        return (0);
}*/
