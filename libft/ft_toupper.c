/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:05:23 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:59:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a character to uppercase.
 *
 * This function converts a lowercase letter (a-z)
 * to its uppercase equivalent, if applicable.
 *
 * @param c The character to convert.
 * @return The converted character.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	int	a;

	a = 97;
	printf("%c vs %c", toupper(a), ft_toupper(a));
	return (0);
}*/
