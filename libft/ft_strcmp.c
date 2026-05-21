/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:21:23 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:26:50 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two strings.
 *
 * This function compares the strings s1 and s2 and returns
 * the difference between the first differing characters.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return An integer less than, equal to, or greater than zero.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
