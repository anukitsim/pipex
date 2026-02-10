/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:42:59 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/29 11:05:32 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int	main(void)
// {
// 	t_list *head;
// 	t_list *a = ft_lstnew("A");
// 	t_list *b = ft_lstnew("B");
// 	head = a;
// 	printf("Before:\n");
// 	printf(" head content: %s\n", (char *)head->content);

// 	ft_lstadd_front(&head, b);
// 	printf("After:\n");
// 	printf("head content: %s\n", (char *)head->content);
// }