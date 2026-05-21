/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strv_shift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 01:10:58 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:57:19 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Shifts a string array to the left.
 *
 * This function frees the first element of the array and
 * shifts all remaining elements one position to the left.
 *
 * @param vector The string array to shift.
 */
void	ft_strv_shift(char **vector)
{
	int	i;

	if (!vector || !vector[0])
		return ;
	i = 0;
	free(vector[0]);
	while (vector[i + 1])
	{
		vector[i] = vector[i + 1];
		i++;
	}
	vector[i] = NULL;
}
