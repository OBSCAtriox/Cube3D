/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:22:49 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:19:57 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a string contains only numeric digits.
 * 
 * This function returns 1 if all characters in the string
 * are digits (0-9), and 0 otherwise. Returns 0 if str is NULL.
 * 
 * @param str The string to be checked.
 * @return 1 if numeric, 0 otherwise.
 */
int	ft_isnumeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
