/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 01:03:07 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:46:04 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes an integer to a file descriptor.
 *
 * This function converts the integer to characters and writes
 * it to the given file descriptor, handling negative values.
 *
 * @param n The integer to write.
 * @param fd The file descriptor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	if (fd < 0)
		return ;
	nb = (long int)n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

/*int     main(void)
{
        int     num = 2080;
        int     fd = 1;

        ft_putnbr_fd(num, fd);
        return (0);
}*/
