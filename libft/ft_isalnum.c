/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:57:00 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:19:35 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

/**
 * Checks if a character is alphanumeric.
 * 
 * This function returns 1 if the character is a digit (0-9) or
 * a letter (A-Z or a-z), and 0 otherwise.
 * 
 * @param c The character to be checked.
 * @return 1 if alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;
	a = 123;

	printf("%d vs %d", ft_isalnum(a), isalnum(a));
	return (0);
}*/
