/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:26:29 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 17:20:40 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates three strings into a new string.
 *
 * This function allocates memory and joins s1, s2, and s3
 * into a single null-terminated string.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param s3 The third string.
 * @return The concatenated string, or NULL on failure.
 */
char	*ft_join3(char *s1, char *s2, char *s3)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1;
	str = ft_calloc(sizeof(char), len);
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, len);
	ft_strlcat(str, s2, len);
	ft_strlcat(str, s3, len);
	return (str);
}
