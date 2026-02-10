/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:01:28 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/04 13:12:06 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*ft_empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (!empty)
	{
		return (NULL);
	}
	empty[0] = '\0';
	return (empty);
}

static void	ft_copy(char *mem, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		mem[i] = s[i];
		i++;
	}
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1_len && !s2_len)
		return (ft_empty());
	joined_str = malloc(s1_len + s2_len + 1);
	if (!joined_str)
		return (NULL);
	ft_copy(joined_str, s1, s1_len);
	ft_copy(joined_str + s1_len, s2, s2_len);
	joined_str[s1_len + s2_len] = '\0';
	return (joined_str);
}
// int	main(void)
// {
// 	const char s1[] = "hello";
// 	const char s2[] = "world";
// 	char *joined = ft_strjoin(s1, s2);
// 	printf("joined string: %s\n", joined);
// 	free(joined);
// 	return (0);
// }