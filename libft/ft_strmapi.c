/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:12:35 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/23 17:19:54 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			s_len;
	char			*mapped_string;

	i = 0;
	s_len = ft_strlen(s);
	mapped_string = malloc(s_len + 1);
	if (!mapped_string)
		return (NULL);
	while (i < s_len)
	{
		mapped_string[i] = f(i, s[i]);
		i++;
	}
	mapped_string[i] = '\0';
	return (mapped_string);
}
// static char odd_to_upper (unsigned int indx, char ch)
// {
// 	if (indx % 2 == 0 && ch >= 'a' && ch <= 'z')
// 	{
// 		ch = ch - 32;
// 	}
// 	return (ch);
// }

// int main (void)
// {
// 	const char s[] = "abcd";
// 	char *mapped_string = ft_strmapi(s, odd_to_upper);
// 	printf("mapped string: %s\n", mapped_string);
// }