/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:46:39 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:19:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

/**
 * Checks if a character is a digit.
 *
 * This function returns 1 if the character is a digit
 * (0-9), and 0 otherwise.
 *
 * @param c The character to be checked.
 * @return 1 if digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	a;
	a = 'b';

	printf("%d vs %d\n", isdigit(a), ft_isdigit(a));
	return (0);
}*/
