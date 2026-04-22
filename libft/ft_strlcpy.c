/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:18:47 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:42:02 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a string with a size limit.
 *
 * This function copies src to dst, ensuring the result
 * is null-terminated if size is greater than 0, and
 * returns the length of src.
 *
 * @param dst The destination buffer.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The length of the source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	strlen;

	a = 0;
	strlen = ft_strlen(src);
	if (size == 0)
		return (strlen);
	while (a < size - 1 && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (strlen);
}

/*int     main(void)
{
	char    str[] = "banana";
        char    str1[10];
        int     z = 6;

        size_t  res = ft_strlcpy(str1, str, z);
        printf("%s\n", str1);
        printf("%zu\n", res);
        return (0);
}*/
