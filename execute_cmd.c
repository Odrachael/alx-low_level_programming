#include "main.h"

void execute_command(const char *command)
{
        pid_t pid = fork();

        if (pid == 0)
        {
                //child process: execute teh command
                char *argv[] = { (char *)command, NULL};
                execve(command, argv, NULL);

                // If execve fails, print error and exit child process
                char error_msg[] = "Command not found\n";
                write(STDERR_FILENO, error_msg, strlen(error_msg));
                exit(EXIT_FAILURE);
        }
        else if (pid > 0)
        {
                //parent process: wait for thechild to complete
                wait(NULL);
        }
        else
        {
		 perror("Fork error");
                exit(EXIT_FAILURE);
        }
