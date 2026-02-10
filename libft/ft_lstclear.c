/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:02:03 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 14:10:24 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (*lst)
	{
		temp = temp->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

// static void ft_del (void *content)
// {
// 	free (content);
// }

// int main (void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("2"));
// 	t_list *node3 = ft_lstnew(ft_strdup("3"));

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	ft_lstclear(&node1, ft_del);
// 	printf("list cleared successfully \n");
// }
