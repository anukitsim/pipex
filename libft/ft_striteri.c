/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:20:22 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/23 17:24:55 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// static void odd_to_upp (unsigned int indx, char *ch)
// {
// 	while (indx % 2 == 0 && *ch >= 'a' && *ch <= 'z')
// 	{
// 		*ch = *ch - 32;
// 	}
// }

// int main (void)
// {
// 	char s[] = "abcd";
// 	printf("s before striteri: %s\n", s);
// 	ft_striteri(s, odd_to_upp);
// 	printf("s after striteri: %s\n", s);
// }