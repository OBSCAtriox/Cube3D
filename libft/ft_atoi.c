/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:17:58 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:18:05 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Converts a string to an integer.
 *
 * This function mimics the behavior of atoi(), converting the initial
 * portion of the string pointed to by nptr to an int. It skips leading
 * whitespace characters, handles an optional sign (+ or -), and then
 * processes consecutive numeric digits.
 *
 * @param nptr The string to be converted.
 * @return The converted integer value.
 */
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;
	int	a;

	sign = 1;
	res = 0;
	a = 0;
	while ((nptr[a] >= 9 && nptr[a] <= 13) || nptr[a] == 32)
		a++;
	if (nptr[a] == '+' || nptr[a] == '-')
	{
		if (nptr[a] == '-')
			sign *= -1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		res = res * 10 + (nptr[a] - '0');
		a++;
	}
	return (res * sign);
}

/*int     main(void)
{
        char    *str = " +123b6";

        printf("%d vs %d", atoi(str), ft_atoi(str));
        return (0);
}*/
