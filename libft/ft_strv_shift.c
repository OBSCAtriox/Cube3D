/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strv_shift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 01:10:58 by thde-sou          #+#    #+#             */
/*   Updated: 2026/01/25 02:24:25 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
