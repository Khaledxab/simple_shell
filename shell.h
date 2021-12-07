#ifndef _SHELL_H_
#define _SHELL_H_

extern char **environ;
extern char *program_invocation_name;

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

/**
 * struct built_in - Struct to handle the built-ins commands
 * @command: input command to handle
 * @f: function pointer to execute the command
 *
 * Description: has a command an function pointer to react to it
 */
typedef struct built_in
{
	char *command;
	int (*f)(char **argv);
} built_in_t;


int _cd(char **argv);
int sh_exit(char **args);
int _printenv(char **argv);
int _setenv(char **argv);
int _unsetenv(char **argv);
char *_getenv(char *key);



/* functions prototypes */
void sign_handler(int sig);
char *read_input();
char **token_buff(char *buff, char *delimiter);
int check_existence(char *path);
void _freeall(char **argv, char **path);

int shell_execute(char **argv, built_in_t built_in_arr[]);
int shell_launch(char **argv);

char *_strcat(char *str1, char *str2);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strlen(char *s);
char *_strtok(char *s, char *deli);
char *_strchr(char *s, char b);
unsigned int _strcspn(char *s, char *pre);

int _atoi(char *s);


void _puts(char *s);
int _putchar(const char c);

#endif
