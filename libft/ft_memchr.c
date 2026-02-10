/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:50:04 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/30 16:31:22 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t			i;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char buffer[] = "Hello World!";
// 	void *my_result = ft_memchr(buffer, 'o', 5);
// 	void *real_result = memchr(buffer, 'o', 5);

// 	printf("my result: %p\n", my_result);
// 	printf("standard result: %p\n", real_result);

// 	if (my_result == real_result)
// 	{
// 		printf("OK \n");
// 	}
// 	else
// 	{
// 		printf("Mismatch!\n");
// 	}
// }