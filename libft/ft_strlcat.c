/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:30:21 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/05 11:25:49 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] && (i < (size - dest_len - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int main (void)
// {
// 	char dest[5] = "Hello";
// 	char src[] = "World!";

// 	printf("dest before concatination: %s\n", dest);
// 	printf("size of dest: %zu\n", sizeof(dest));
// 	printf("length of dest: %zu\n", ft_strlen(dest));

// 	size_t result = ft_strlcat(dest, src, sizeof(dest));
// 	printf("dest after concatication: %s\n", dest);
// 	printf("result of strlen, length of string: %zu\n", result);
// }