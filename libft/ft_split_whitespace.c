/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 01:05:42 by thde-sou          #+#    #+#             */
/*   Updated: 2026/04/22 19:16:45 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_isspace(str[i]) && (i == 0 || ft_isspace(str[i - 1])))
			count += 1;
		i++;
	}
	return (count);
}

static int	str_size(char *str, int start)
{
	int	i;

	i = start;
	while (str[i])
	{
		if (ft_isspace(str[i]))
			break ;
		i++;
	}
	return (i - start);
}

static int	make_arr(char *str, char **arr)
{
	size_t	i;
	size_t	y;
	size_t	len;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (!ft_isspace(str[i]) && (i == 0 || ft_isspace(str[i - 1])))
		{
			len = str_size(str, i);
			arr[y] = ft_substr(str, i, len);
			if (!arr[y])
			{
				arr[y] = NULL;
				return (0);
			}
			y++;
			i += len;
		}
		else
			i++;
	}
	arr[y] = NULL;
	return (1);
}

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i])
			free(arr[i]);
		i++;
	}
	free(arr);
}

/**
 * Splits a string using whitespace as a separator.
 *
 * This function creates an array of strings by splitting
 * the input string at whitespace characters.
 *
 * @param str The string to split.
 * @return The allocated array of words, or NULL on failure.
 */
char	**ft_split_whitespace(char *str)
{
	char	**arr;
	size_t	count;

	if (!str)
		return (NULL);
	count = count_words(str);
	if (count >= (SIZE_MAX / sizeof(char *)) - 1)
		return (NULL);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!make_arr(str, arr))
	{
		free_split(arr);
		return (NULL);
	}
	return (arr);
}
