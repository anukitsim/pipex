/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:48:30 by anukitsimin       #+#    #+#             */
/*   Updated: 2025/07/04 10:16:11 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*dup;

	i = 0;
	len = ft_strlen(s1);
	dup = malloc(len + 1);
	if (!dup)
	{
		return (NULL);
	}
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int main (void)
// {
//     const char s1[] = "Hello World!";
//     char *my_result = ft_strdup(s1);
//     char *standard_result = strdup(s1);

//     if(strcmp(my_result, standard_result) == 0)
//     {
//         printf("CORRECT\n");

//     }
//     else
//     {
//         printf("MISMATCH!\n");

//     }
//     free(my_result);
//     free(standard_result);

//      const char s2[] = "";
//     char *my_result2 = ft_strdup(s2);
//     char *standard_result2 = strdup(s2);

//     if(strcmp(my_result2, standard_result2) == 0)
//     {
//         printf("CORRECT\n");

//     }
//     else
//     {
//         printf("MISMATCH!\n");

//     }
//     free(my_result2);
//     free(standard_result2);
// }