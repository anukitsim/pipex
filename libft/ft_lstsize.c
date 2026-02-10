/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:06:57 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 12:58:58 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	count = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

// int main (void)
// {
// 	t_list *head;
// 	t_list *node1 = ft_lstnew("1");
// 	t_list *node2 = ft_lstnew("2");
// 	t_list *node3 = ft_lstnew("3");
// 	t_list *node4 = ft_lstnew("4");
// 	t_list *node5 = ft_lstnew("5");
// 	t_list *node6 = ft_lstnew("6");
// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = node5;
// 	node5->next = node6;
// 	node6->next = NULL;
// 	int count = ft_lstsize(head);
// 	printf("%d nodes\n", count);

// }