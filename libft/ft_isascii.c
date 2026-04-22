/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:20:51 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:19:46 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

/**
 * Checks if a character is an ASCII value.
 *
 * This function returns 1 if the character is within the
 * ASCII range (0 to 127), and 0 otherwise.
 *
 * @param c The character to be checked.
 * @return 1 if ASCII, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;
	a = 4;

	printf("%d vc %d", isascii(a), ft_isascii(a));
	return (0);
}*/
