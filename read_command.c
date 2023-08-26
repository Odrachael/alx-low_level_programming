#include "main.h"

void read_command(char *command)
{
        ssize_t cmd_read = read(STDIN_FILEN, command, MAX_COMMAND_LENGTH);

        if (cmd_read == -1)
        {
                perror("Read error");
                exit(EXIT_FAILURE);
        }
        else if (cmd_read == 0)
        {
                //Handle end of file (Ctrl+D)
                printf("\n");
                exit(EXIT_SUCCESS);
        }
        command[cmd_read - 1] = '\0'; //Remove newline character
}
