/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:48:48 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:58:44 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a character to lowercase.
 *
 * This function converts an uppercase letter (A-Z)
 * to its lowercase equivalent, if applicable.
 *
 * @param c The character to convert.
 * @return The converted character.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	int	a;

	a = 90;
	printf("%c vs %c", tolower(a), ft_tolower(a));
	return (0);
}*/
