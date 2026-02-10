/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:21:22 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/27 19:28:42 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
// int main (void)
// {
// 	const char s1[] = "Hello";
// 	const char s2[] = "Hello";
// 	int result = ft_strncmp(s1, s2, 6);
// 	printf("result of comparison: %d\n", result);

// 	const char s3[] = "Hallo";
// 	const char s4[] = "Hello";
// 	int result1 = ft_strncmp(s3, s4, 2);
// 	printf("result of comparison: %d\n", result1);

// 	const char s5[] = "Hallo";
// 	const char s6[] = "Hello";
// 	int result2 = ft_strncmp(s5, s6, 6);
// 	printf("result of comparison: %d\n", result2);

// 	const char s7[] = "Hpllo";
// 	const char s8[] = "Hello";
// 	int result3 = ft_strncmp(s7, s8, 6);
// 	printf("result of comparison: %d\n", result3);

// }