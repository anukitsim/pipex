/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:45:41 by atsimint          #+#    #+#             */
/*   Updated: 2025/05/26 20:19:50 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}
// int main (void)
// {
//     char buffer[13] = "Hello World!";
//     printf("buffer before memset: %s\n", buffer);

//     void *result = ft_memset(buffer, 'a', 6);
//     char *result1 = (char *)result;
//     printf("buffer after result: %s\n", result1);
// }