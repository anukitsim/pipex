/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:32:33 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/04 15:45:38 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_is_in_set(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static void	ft_copy(char *buffer, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		buffer[i] = s[i];
		i++;
	}
	buffer[i] = '\0';
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	char	*trimmed;

	s1_len = ft_strlen(s1);
	start = 0;
	end = s1_len;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	if (start > end)
		trimmed_len = 0;
	else
		trimmed_len = end - start;
	trimmed = malloc(trimmed_len + 1);
	if (!trimmed)
		return (NULL);
	ft_copy(trimmed, s1 + start, trimmed_len);
	return (trimmed);
}
// int main(void)
// {
// 	const char s1[] = "abcde";
// 	const char set[] = "ae";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("trimmed string: %s\n", trimmed);
// 	free(trimmed);
// }