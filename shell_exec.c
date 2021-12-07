#include"shell.h"

/**
 * shell_execute - executes the built in commands
 * @argv: pointer to the argv
 * @built_in_arr: pointer to the struct with built in comm
 * Return: 1 on success
 **/
int shell_execute(char **argv, built_in_t built_in_arr[])
{
	int i = 0;

	if (argv[0] == NULL)
		return (0);

	while (i < 5)
	{
		if (_strcmp(argv[0], built_in_arr[i].command) == 0)
		{
			return (built_in_arr[i].f(argv));
		}
		i++;
	}
	return (shell_launch(argv));
}

/**
 * _freeall - frees arv and path
 * @argv: Buffer containing the tokens
 * @path: path to look for exec files
 */
void _freeall(char **argv, char **path)
{
	free(argv[0]);
	free(argv);
	free(path);
}
/**
 * check_existence - checkes whether a file exists
 * @path: pointer to the path to search in
 * Return: 1 on success, -1 if failed
 */
int check_existence(char *path)
{
	int fd = access(path, F_OK | X_OK);

	if (fd == -1)
		return (-1);
	return (1);
}

