/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:03:28 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:19:41 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character is alphabetic.
 * 
 * This function returns 1 if the character is a letter
 * (A-Z or a-z), and 0 otherwise.
 * 
 * @param c The character to be checked.
 * @return 1 if alphabetic, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;
	a = 120;

	printf("%d vs %d\n", isalpha(a), ft_isalpha(a));
	return (0);
}*/
