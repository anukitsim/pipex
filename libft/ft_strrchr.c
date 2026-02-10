/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:56:39 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/21 17:09:38 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			len;

	ch = (unsigned char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if ((unsigned char)s[len] == ch)
		{
			return ((char *)s + len);
		}
		len--;
	}
	if ((unsigned char)s[0] == ch)
	{
		return ((char *)s);
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char s[] = "Hello World";
// 	int c = 'o';
// 	char *result = ft_strrchr(s, c);
// 	printf("string: %s, last char: %c, index: %td, adress: %p\n", s, c, result
// 		- s, result);

// 	const char s1[] = "Hello World";
// 	int c1 = 'Y';
// 	char *result1 = ft_strrchr(s1, c1);
// 	if (result1)
// 	{
// 		printf("string: %s, last char: %c, index: %td, adress: %p\n", s1, c1,
// 			result1 - s1, result1);
// 	}
// 	else
// 	{
// 		printf("character %c not found in %s\n", c1, s1);
// 	}

// 	const char s2[] = "Hello World";
// 	int c2 = 'H';
// 	char *result2 = ft_strrchr(s2, c2);
// 	printf("string: %s, last char: %c, index: %td, adress: %p\n", s2, c2,
// 		result2 - s2, result2);
// }