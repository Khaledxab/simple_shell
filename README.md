# Simple Shell - C programming language

This simple Shell - **Shell** - is a programm that provides an interface for users to get access to the kernel's services. In other words the  **Shell** works as a command interpreter.

This shell is able to run default commands and also some other that have been built in (More info inside the Man Page).

##  Usage

The shell takes the commands from the standard input, executes them and gets ready to read another command-line.

As an example you can use the <b>ls</b> command for listing files in the current directory:
```sh
$ ls
AUTHORS    _atoi.c     _string.c  builtins.c  hsh     man_1_simple_shell  shell_exec.c    test
README.md  _printer.c  _strtok.c  env.c       main.c  shell.h             shell_launch.c  test2
```

# Manual
We provided a man page in the repository, it can be run like this:
```
$ man ./man_1_simple_shell
```
and you will se something like this

```sh
SHELL(1)                                                     Shell man page                                                     SHELL(1)

NAME
       hsh - Command line interpreter (shell)

SYNOPSIS
       #include shell.h

       ./hsh -> executes

DESCRIPTION
       hsh is a prorgramm that provides an interface for users to get access to the kernel's services.

INVOCATION
       In order to invoke this shell it is necessary to run the ./hsh command.
```
# Authors
* Ghassen Boughammoura <github.com/Ghassen-bgh>
* Khaled Ben Abderrahmen <github.com/Khaledxab>