/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:11:51 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/21 16:55:14 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_word_flag;

	i = 0;
	count = 0;
	in_word_flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (in_word_flag == 0)
			{
				count++;
				in_word_flag = 1;
			}
		}
		else
		{
			in_word_flag = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_save_word(const char *s, char c, size_t *i)
{
	size_t	start;

	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	start = *i;
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	return (ft_substr(s, start, (*i - start)));
}

static char	**ft_free(char **split, size_t filled)
{
	while (filled > 0)
	{
		filled--;
		free(split[filled]);
	}
	free(split);
	return (NULL);
}

static char	**ft_alloc_split(size_t count)
{
	char	**split;

	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	if (count == 0)
	{
		split[0] = NULL;
		return (split);
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	arr_index;
	char	**split;

	if (!s)
		return (NULL);
	i = 0;
	arr_index = 0;
	count = ft_count_words(s, c);
	split = ft_alloc_split(count);
	if (!split)
		return (NULL);
	while (arr_index < count)
	{
		split[arr_index] = ft_save_word(s, c, &i);
		if (!split[arr_index])
		{
			return (ft_free(split, arr_index));
		}
		arr_index++;
	}
	split[arr_index] = NULL;
	return (split);
}
// int main (void)
// {
// 	const char s[] = "one,two,three";
// 	char c = ',';
// 	char **split = ft_split(s, c);
// 	printf("first word: %s\n", split[0]);
// 	printf("second word: %s\n", split[1]);
// 	printf("third word: %s\n", split[2]);
// 	printf("forth should be NULL: %s\n", split[3]);
// }