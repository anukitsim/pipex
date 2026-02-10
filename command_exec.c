/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_exec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsimint <atsimint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:00:00 by atsimint          #+#    #+#             */
/*   Updated: 2025/02/10 00:00:00 by atsimint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**sep_commands(char *command)
{
	char	**arr_commands;

	arr_commands = ft_split(command, ' ');
	return (arr_commands);
}

char	**get_paths(char **envp)
{
	int		i;
	char	*path;
	char	**all_paths;

	path = NULL;
	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
			path = envp[i] + 5;
		i++;
	}
	if (!path)
		return (NULL);
	all_paths = ft_split(path, ':');
	return (all_paths);
}

static void	try_absolute_path(char **commands_arr, char **envp)
{
	int	code;

	execve(commands_arr[0], commands_arr, envp);
	perror(commands_arr[0]);
	code = 127;
	if (access(commands_arr[0], F_OK) == 0)
		code = 126;
	free_arr(commands_arr);
	exit(code);
}

static void	cmd_not_found(char **commands_arr, char *command_path,
	char **all_paths)
{
	ft_putstr_fd(commands_arr[0], 2);
	ft_putstr_fd(": command not found\n", 2);
	free(command_path);
	free_arr(all_paths);
	free_arr(commands_arr);
	exit(127);
}

void	execute_command(char *command, char **envp)
{
	char	**commands_arr;
	char	*command_path;
	char	**all_paths;

	commands_arr = sep_commands(command);
	if (!commands_arr || !commands_arr[0])
	{
		if (commands_arr)
			free_arr(commands_arr);
		exit(1);
	}
	if (ft_strchr(commands_arr[0], '/') != NULL)
		try_absolute_path(commands_arr, envp);
	all_paths = get_paths(envp);
	if (!all_paths)
		cmd_not_found(commands_arr, NULL, NULL);
	command_path = access_command(all_paths, commands_arr[0]);
	if (!command_path)
		cmd_not_found(commands_arr, NULL, all_paths);
	execve(command_path, commands_arr, envp);
	perror(command_path);
	free(command_path);
	free_arr(all_paths);
	free_arr(commands_arr);
	exit(126);
}
