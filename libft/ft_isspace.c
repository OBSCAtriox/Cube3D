/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:59:44 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:20:19 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character is whitespace.
 *
 * This function returns 1 if the character is whitespace
 * (space or ASCII 9 to 13), and 0 otherwise.
 *
 * @param c The character to be checked.
 * @return 1 if whitespace, 0 otherwise.
 */
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
