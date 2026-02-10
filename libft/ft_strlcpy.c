/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:42:56 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/05 09:38:28 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
// int main (void)
// {
// 	char dest[9];
// 	const char src[20] = "Hello World!";

// 	printf("dest before strlcpy: %s\n", dest);
// 	printf("src before strlcpy: %s\n", src);
// 	size_t result = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("dest after copying: %s\n", dest);
// 	printf("actual return (of strlcpy, length of src: %zu\n", result));
// }