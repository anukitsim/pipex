/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:15:41 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 13:29:10 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// int main (void)
// {
// 	t_list *node1 = ft_lstnew("1");
// 	t_list *node2 = ft_lstnew("2");
// 	t_list *node3 = ft_lstnew("3");

// 	t_list *new_node = ft_lstnew("new");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	ft_lstadd_back(&node1, new_node);
// 	while (node1)
// 	{
// 		printf("%s -> ", (char *)node1->content);
// 		node1 = node1->next;
// 	}
// 	printf("NULL \n");

// }