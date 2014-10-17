#include <stdio.h>

int main ( int argc, char *argv[] )
{
    if (argv[1])
    {
	printf("The given Argument which we will use is \"%s\".\n\n", argv[1]);
    }
    else 
    {
        printf("\n\nDob't be a smarty pants and give use some argument with which we can work! :)\n\n");
    }
}
