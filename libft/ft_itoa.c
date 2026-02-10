/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:44:17 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/21 20:49:52 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_count_digits(long digits)
{
	int	count;

	count = 0;
	if (digits == 0)
		return (1);
	while (digits)
	{
		digits = digits / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	digits;
	int		is_negative;
	int		str_len;
	char	*str;

	digits = n;
	is_negative = (n < 0);
	if (is_negative)
		digits = -digits;
	str_len = ft_count_digits(digits) + is_negative;
	str = malloc(str_len + 1);
	if (!str)
		return (NULL);
	str[str_len] = '\0';
	while (str_len-- > is_negative)
	{
		str[str_len] = (digits % 10) + '0';
		digits = digits / 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
// int main (void)
// {
// 	int n = -42;
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// }