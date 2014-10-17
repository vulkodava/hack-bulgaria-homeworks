#include "stdio.h"

main()
{
    FILE *fp1;
    char oneword[100];
    char c;

    fp1 = fopen("mm-file.txt","r");

    do {
       c = fscanf(fp1, "%s", oneword); /* got one word from the file */
       printf("%s\n", oneword);       /* display it on the monitor  */
       printf("\n\nOh, I will read just one word. For more you have to PAY ]:) :).\n\n");
       break;
    } while (c != EOF);              /* repeat until EOF           */

    fclose(fp1);
}
