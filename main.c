#include "shell.h"

/**
 * main - Entry point of the program.
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: status code
 */
int main(int argc, char **argv)
{
	shell_loop();
	return (EXIT_SUCCESS);
}
