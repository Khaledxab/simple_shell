#include"shell.h"
/**
 * shell_launch - creates the process to execute shell commands
 * @argv: pointer to argv
 * Return: 1 on success
 */
int shell_launch(char **argv)
{
	int pid, existence, current_path = 0, c, status;
	char **path = 0, *command = 0, *path_command = 0, *env = 0;

	pid = fork();
	if (pid == 0)
	{
		env = _getenv("PATH");
		if (env && env[0] == ':')
			current_path = 1;
		path = token_buff(env, ":");
		for (c = 0; path[c]; c++)
		{
			command = strcat("/", argv[0]);
			path_command = strcat(path[c], command);
			existence = check_existence(path_command);
			if (existence != -1 && !current_path)
			{
				argv[0] = path_command;
				break;
			}
			else
				free(path_command);
			free(command);
		}
		existence = check_existence(argv[0]);
		if (existence == -1)
		{
			_freeall(argv, path);
			exit(127);
		}
		if (execve(argv[0], argv, environ) == -1)
			perror("Error");
		_freeall(argv, path);
		exit(2);
	}
	else if (pid < 0)
		perror("hsh");
	else
		wait(&status);
	return (WEXITSTATUS(status));
}
