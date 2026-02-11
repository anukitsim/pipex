/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anukitsimintia <anukitsimintia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:00:00 by atsimint          #+#    #+#             */
/*   Updated: 2026/02/11 15:56:19 by anukitsimin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	first_child(int *pipe_fd, char **argv, char **envp)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_handling(argv[1]);
	dup2(fd, 0);
	dup2(pipe_fd[1], 1);
	close(pipe_fd[0]);
	close(fd);
	close(pipe_fd[1]);
	execute_command(argv[2], envp);
	exit(0);
}

void	second_child(int *pipe_fd, char **argv, char **envp)
{
	int	fd;

	fd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		error_handling(argv[4]);
	dup2(pipe_fd[0], 0);
	dup2(fd, 1);
	close(pipe_fd[1]);
	close(fd);
	close(pipe_fd[0]);
	execute_command(argv[3], envp);
	exit(0);
}

int	argc_check(int argc)
{
	if (argc != 5)
	{
		ft_putstr_fd("Error: Invalid number of arguments\n", 2);
		return (1);
	}
	return (0);
}

static int	run_pipeline(int pipe_fd[2], char **argv, char **envp)
{
	pid_t	child1;
	pid_t	child2;
	int		status;

	child1 = fork();
	if (child1 == -1)
		error_handling("fork");
	if (child1 == 0)
		first_child(pipe_fd, argv, envp);
	child2 = fork();
	if (child2 == -1)
		error_handling("fork");
	if (child2 == 0)
		second_child(pipe_fd, argv, envp);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	waitpid(child1, NULL, 0);
	waitpid(child2, &status, 0);
	return (status / 256);
}

int	main(int argc, char **argv, char **envp)
{
	int	pipe_fd[2];

	if (argc_check(argc))
		return (1);
	if (pipe(pipe_fd) == -1)
		error_handling("pipe");
	return (run_pipeline(pipe_fd, argv, envp));
}
