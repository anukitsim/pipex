*This project has been created as part of the 42 curriculum by atsimint.*

## Description

Pipex is a project that reproduces the behaviour of the shell pipeline with redirections. The program is executed with four arguments: an input file, command 1, command 2, and an output file. It behaves like the shell command: `< file1 cmd1 | cmd2 > file2`.

## Instructions

- Compilation: `make`
- Clean object files: `make clean`
- Full clean: `make fclean`
- Rebuild: `make re`
- Run: `./pipex file1 cmd1 cmd2 file2`

Example: `./pipex infile "ls -l" "wc -l" outfile`

## Resources

- man 2 pipe, man 2 fork, man 2 dup2, man 2 execve, man 2 open
- 42 project subject: Pipex

## AI use

AI was used for understanding pipe/fork/dup2 behaviour, testing edge cases, and Norm compliance checks. Implementation and design choices are the author’s.
