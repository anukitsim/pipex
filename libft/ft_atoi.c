/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:13:13 by atsimint          #+#    #+#             */
/*   Updated: 2025/06/30 15:37:43 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
// int main (void)
// {
// 	const char nptr[] = "  1ab";
// 	const char nptr1[] = "  -4a2b";
// 	const char nptr2[] = "  ++1ab";
// 	const char nptr3[] = "  +-1ab";
// 	const char nptr4[] = "ab";
// 	const char nptr5[] = "12345ab3";

// 	int result = ft_atoi(nptr);
// 	int result1 = ft_atoi(nptr1);
// 	int result2 = ft_atoi(nptr2);
// 	int result3 = ft_atoi(nptr3);
// 	int result4 = ft_atoi(nptr4);
// 	int result5 = ft_atoi(nptr5);

// 	printf("result: %d\n", result);
// 	printf("result1: %d\n", result1);
// 	printf("result2: %d\n", result2);
// 	printf("result3: %d\n", result3);
// 	printf("result4: %d\n", result4);
// 	printf("result5: %d\n", result5);

// }