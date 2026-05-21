/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:18:58 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:38:39 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Appends a string to another with a size limit.
 *
 * This function appends src to dest, ensuring the total
 * length does not exceed size, and returns the total
 * length of the string it tried to create.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the resulting string.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	z_dst;
	size_t	z_src;
	size_t	z_sum;

	z_dst = ft_strlen(dst);
	z_src = ft_strlen(src);
	z_sum = (z_dst + z_src);
	a = 0;
	if (size <= z_dst)
		return (z_src + size);
	while (src[a] != '\0' && z_dst + a < size - 1)
	{
		dst[z_dst + a] = src[a];
		a++;
	}
	dst[z_dst + a] = '\0';
	return (z_sum);
}

/*int     main(void)
{
        char    str1[10] = "1234";
        char    str2[] = "56";
        int     z = 3;
        size_t  res = ft_strlcat(str1, str2, z);

        printf("%s", str1);
        printf("\n%zu", res);
        return (0);
}*/
