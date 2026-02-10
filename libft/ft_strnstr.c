/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 18:18:33 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/27 18:42:00 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_is_match(const char *big, const char *little, size_t i,
		size_t len)
{
	size_t	j;

	j = 0;
	while (little[j] && big[i + j] && (i + j) < len && big[i + j] == little[j])
	{
		j++;
	}
	return (little[j] == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		if (big[i] == little[0] && ft_is_match(big, little, i, len))
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
// int main (void)
// {
// 	const char big[] = "Hello World";
// 	const char little[] = "World";
// 	size_t len = 15;

// 	printf("big: %s, little: %s, adress: %p\n", big, little, ft_strnstr(big,
//			little, len));
// 	printf("big: %s, little: %s, result: %s\n", big, little, ft_strnstr(big,
//			little, len));

// 	const char big2[] = "Hello World";
// 	const char little2[] = "";
// 	size_t len2 = 15;

// 	printf("big: %s, little: %s, adress: %p\n", big2, little2, ft_strnstr(big2,
//			little2, len2));
// 	printf("big: %s, little: %s, result: %s\n", big2, little2, ft_strnstr(big2,
//			little2, len2));
//
// 	const char big3[] = "Hello World";
// 	const char little3[] = "Blabla";
// 	size_t len3 = 15;
//
// 	printf("big: %s, little: %s, adress: %p\n", big3, little3, ft_strnstr(big3,
//			little3, len3));
// 	printf("big: %s, little: %s, result: %s\n", big3, little3, ft_strnstr(big3,
//			little3, len3));
// }