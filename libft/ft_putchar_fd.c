/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:23:05 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:41:59 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to a file descriptor.
 *
 * This function writes the character c to the given file
 * descriptor if it is valid.
 *
 * @param c The character to write.
 * @param fd The file descriptor.
 */
void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	if (write(fd, &c, 1) == -1)
		return ;
}

/*int     main(void)
{
        int     fd = 1;
        char    c = 'a';

        ft_putchar_fd(c, fd);
        printf("\n");
        return (0);
}*/
