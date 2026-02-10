/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:19:41 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 17:29:41 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// static void	ft_del(void *content)
// {
// 	free(content);
// }

// static void *ft_f (void *content)
// {
// 	char *str = (char *)content;
// 	char *new_str = malloc(ft_strlen(str) + 1);
// 	if(!new_str)
// 		return (NULL);
// 	int i = 0;
// 	while (str[i])
// 	{
// 		new_str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	new_str[i] = '\0';
// 	return (new_str);
// }

// int main (void)
// {
// 	t_list *node1 = ft_lstnew("hello");
// 	t_list *node2 = ft_lstnew("world");
// 	t_list *head = node1;
// 	node1->next =node2;

// 	printf("original list: \n");
// 	while (head)
// 	{
// 		printf("%s -> ", (char *)head->content);
// 		head = head->next;
// 	}
// 	printf("NULL \n");

// 	t_list *new_list = ft_lstmap(node1, ft_f, ft_del);
// 	printf("new list: \n");
// 	while (new_list)
// 	{
// 		printf("%s -> ", (char *)new_list->content);
// 		new_list = new_list->next;
// 	}
// 	printf("NULL \n");

// }
