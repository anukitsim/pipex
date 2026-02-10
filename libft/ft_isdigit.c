/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:40:29 by atsimint          #+#    #+#             */
/*   Updated: 2025/05/27 13:07:21 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int main (void)
// {
//     // when is unsigned char from 0-9
//     int c = '5';
//     int result = ft_isdigit(c);

//     printf("when is unsigned char from 0-9, result is: %d\n", result);

//     // when its other character

//     int c1 = 'F';
//     int result1 = ft_isdigit(c1);

//     printf("when its other character, result is: %d\n", result1);

//     // when its integer

//     int c2 = 5;
//     int result2 = ft_isdigit(c2);
//     printf("when its integer, the result is: %d\n", result2);

// }