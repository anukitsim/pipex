/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:12:21 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 14:31:22 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	ft_f(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		printf("%c", ft_toupper(*str));
// 		str++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;

// 	node1 = ft_lstnew("hello");
// 	node2 = ft_lstnew("world");
// 	node1->next = node2;
// 	ft_lstiter(node1, ft_f);
// 	free(node1);
// 	free(node2);
// }
