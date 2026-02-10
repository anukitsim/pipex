/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:53:16 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/21 16:30:29 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == ch)
		{
			return ((char *)s);
		}
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
// int main (void)
// {
// 	const char s[] = "Hello World";
// 	int c = 'W';
// 	char *result = ft_strchr(s, c);

// 	printf("string: %s\n,index %td character %c, adress %p\n", s, result - s, c,
// 		result);

// 	const char s1[] = "Hello World";
// 	int c1 = 'Y';
// 	char *result1 = ft_strchr(s1, c1);
// 	if(result1)
// 	{
// 		printf("string: %s,index %td, character %c,adress %p\n", s1, result1
//			     - s1, c1, result1);
// 	}
// 	else
// 	{
// 		printf("character %c not found in string %s\n", c1,s1);
// 	}

// 	const char s2[] = "";
// 	int c2 = '\0';
// 	char *result2 = ft_strchr(s2, c2);
// 	printf("string: %s,index %td, character %c,adress %p\n", s2, result2 - s2,
//		c2, result2);
// }