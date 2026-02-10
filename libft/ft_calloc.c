/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:43:59 by anukitsimin       #+#    #+#             */
/*   Updated: 2025/07/04 10:14:15 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	unsigned char	*ptr;

	if (count == 0 || size == 0)
	{
		return (malloc(0));
	}
	if (size != 0 && size > SIZE_MAX / count)
	{
		return (NULL);
	}
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
// int main (void)
// {
//     printf ("Test 1: for normal, non-NULL allocations\n");
//     size_t i;
//     unsigned char *mem;

//     mem = (unsigned char *)ft_calloc(10, sizeof(char));
//     if(!mem)
//     {
//         printf("Memory allocation Failed \n");
//     }
//     else
//     {
//         printf("Memory Allocation was successful \n");

//         int all_zeros = 1;
//         while (i < 10)
//         {
//             if(mem[i] != 0)
//             {
//                 all_zeros = 0;
//                 break ;
//             }
//             i++;
//         }
//         printf("Zeros check: %s/n", all_zeros ? "OK\n" : "FAILED\n");
//         free(mem);
//     }

//     printf("TEST 2: if count = 0, should return (non_NULL\n"));

//     mem = (unsigned char *)ft_calloc(0, sizeof(char));
//     if(!mem)
//     {
//         printf("Returned NULL\n");
//     }
//     else
//     {
//         printf("Returned non-NULL value as expected!\n");
//         free(mem);
//     }

//      printf("TEST 3: if size = 0, should return (non_NULL\n"));

//     mem = (unsigned char *)ft_calloc(5, 0);
//     if(!mem)
//     {
//         printf("Returned NULL\n");
//     }
//     else
//     {
//         printf("Returned non-NULL value as expected!\n");
//         free(mem);
//     }

//        printf("TEST 4: Overflow detection\n");
//        mem = (unsigned char *)ft_calloc(SIZE_MAX, SIZE_MAX);
//        if(!mem)
//        {
//         printf("returned NULL as expected on overflow\n");
//        }
//        else
//        {
//         printf("FAILED, should have returned NULL\n");
//        }

// }