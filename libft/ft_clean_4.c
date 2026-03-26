/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiago <thiago@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 20:09:31 by thiago            #+#    #+#             */
/*   Updated: 2026/03/26 20:37:21 by thiago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clean_4(void **prt1, void **prt2, void **prt3, void **prt4)
{
	ft_memdel(prt1);
	ft_memdel(prt2);
	ft_memdel(prt3);
	ft_memdel(prt4);
}
