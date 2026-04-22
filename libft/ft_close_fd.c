/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 20:42:12 by thiago            #+#    #+#             */
/*   Updated: 2026/04/22 17:19:06 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Closes a file descriptor and sets it to -1.
 *
 * This function closes the given file descriptor if it is valid,
 * and then sets its value to -1 to mark it as closed.
 *
 * @param fd A pointer to the file descriptor to be closed.
 */
void	ft_close_fd(int *fd)
{
	if (!fd || *fd < 0)
		return ;
	close(*fd);
	*fd = -1;
}
