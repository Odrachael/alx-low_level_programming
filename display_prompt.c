#include "main.h"

void display_prompt()
{
        char prompt[] = "simple_shell > ";
        write(STDOU_FLENO, prompt, strlen(prompt));
}
