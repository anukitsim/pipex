/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:58:12 by atsimint          #+#    #+#             */
/*   Updated: 2025/07/23 18:02:19 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
// int main (void)
// {
// 	int fd = 1;
// 	ft_putchar_fd('c', fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putchar_fd('X', fd);
// 	ft_putchar_fd('\n', fd);
// }