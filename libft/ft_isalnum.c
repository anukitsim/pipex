/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:49:14 by atsimint          #+#    #+#             */
/*   Updated: 2025/05/26 19:20:26 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	unsigned char	alnum;

	alnum = (unsigned char)c;
	if (ft_isalpha(alnum) || ft_isdigit(alnum))
	{
		return (1);
	}
	return (0);
}

// int main (void)
// {
//     int c = 5;
//     int result = ft_isalnum(c);

//     printf("%d\n", result);

// }
