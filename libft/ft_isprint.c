/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:27:28 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:20:13 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

/**
 * Checks if a character is printable.
 * 
 * This function returns 1 if the character is within the
 * printable ASCII range (32-126), and 0 otherwise.
 * 
 * @param c The character to be checked.
 * @return 1 if printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;

	a = 127;
	printf("%d vs %d", isprint(a), ft_isprint(a));
	return (0);
}*/
