/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:31:20 by atsimint          #+#    #+#             */
/*   Updated: 2025/08/01 13:59:53 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void ft_del (void *content)
// {
// 	free (content);
// }

// int main (void)
// {
// 	t_list *node = ft_lstnew(ft_strdup("1"));
// 	ft_lstdelone(node, ft_del);

// 	printf("Node deleted successfully");
// }