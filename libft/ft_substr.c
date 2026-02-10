/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:01:57 by anukitsimin       #+#    #+#             */
/*   Updated: 2025/07/15 20:37:55 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_empty(void)
{
	char	*empty;

	empty = (char *)malloc(1);
	if (empty != NULL)
		empty[0] = '\0';
	return (empty);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	copy_len;
	char	*substring;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_empty());
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	substring = (char *)malloc(copy_len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < copy_len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
