#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int abrir (char* program, char** arg_list)
       {
	     pid_t programa;
	     programa = fork ();
       }

int main ()
{
    char* arg_list[] = {
	"SublimeText", NULL
    };
    abrir ("SublimeText", arg_list);
    return 0;
}


