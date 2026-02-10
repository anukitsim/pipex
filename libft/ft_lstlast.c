/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:02:14 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 13:13:04 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main (void)
// {
// 	t_list *node1 = ft_lstnew("1");
// 	t_list *node2 = ft_lstnew("2");
// 	t_list *node3 = ft_lstnew("3");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	t_list *last_node = ft_lstlast(node1);
// 	printf("last node content is: %s\n", (char *)last_node->content);
// }