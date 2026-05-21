/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:30:54 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:47:56 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string to a file descriptor.
 *
 * This function writes the string c to the given file
 * descriptor.
 *
 * @param c The string to write.
 * @param fd The file descriptor.
 */
void	ft_putstr_fd(char *c, int fd)
{
	int	a;

	if (fd < 0 || !c)
		return ;
	a = 0;
	while (c[a] != '\0')
	{
		if (write(fd, &c[a], 1) == -1)
			return ;
		a++;
	}
}

/*int     main(void)
{
        char    str[] = "abcd";
        int     fd = 1;

        ft_putstr_fd(str, fd);
        printf("\n");
        return (0);
}*/
