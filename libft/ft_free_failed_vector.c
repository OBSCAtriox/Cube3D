/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_failed_vector.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tide-pau <tide-pau@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:42:13 by thde-sou          #+#    #+#             */
/*   Updated: 2026/03/27 20:57:59 by tide-pau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_failed_vector(char ***vector, int idx)
{
	int	i;

	if (!vector || !*vector)
		return ;
	i = 0;
	while (i < idx)
	{
		free((*vector)[i]);
		(*vector)[i] = NULL;
		i++;
	}
	free(*vector);
	*vector = NULL;
}
