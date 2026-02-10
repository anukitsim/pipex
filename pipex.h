/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:00:00 by atsimint          #+#    #+#             */
/*   Updated: 2025/02/10 00:00:00 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/wait.h>
# include "libft.h"

char	*access_command(char **all_paths, char *command);
char	**sep_commands(char *command);
char	**get_paths(char **envp);
void	execute_command(char *command, char **envp);
void	error_handling(char *err_message);
void	free_arr(char **arr);

#endif
