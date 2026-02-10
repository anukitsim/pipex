/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:08:01 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/04 17:12:35 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!s && !d)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int main (void)
// {
//     char dest[10];
//     printf("destination buffer before memcpy: %s\n", dest);
//     char src[] = "Hello World";
//     char *result = ft_memcpy(dest, src, 6);

//     printf("source : %s\n", src);
//     printf("destination buffer after memcpy: %s\n", result);
// }