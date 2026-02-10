/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:31:10 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/30 16:41:54 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
// int main (void)
// {
// 	const char s1[] = "abc";
// 	const char s2[] = "abc";

// 	int my_result = ft_memcmp(s1, s2, 4);
// 	int real_result = memcmp(s1, s2, 4);

// 	printf("my result: %d\n", my_result);
// 	printf("standard result: %d\n", real_result);

// 	if(my_result == real_result)
// 	{
// 		printf("OK!\n");
// 	}
// 	else
// 	{
// 		printf("MISMATCH!\n");
// 	}
// }