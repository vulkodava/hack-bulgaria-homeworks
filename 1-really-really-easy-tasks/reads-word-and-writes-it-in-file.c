#include "stdio.h"

main(int argc, char *argv[])
{
    if (!argv[1]) {
	printf("\n\nAaaaa, give me a file in which I can write the damn word you want, smarty pants!\n\n");
    }
    FILE *fp1;
    FILE *fout;
    fout = fopen(argv[1], "w");
    char oneword[100];
    char c;

    fp1 = fopen("mm-file.txt","r");

    do {
       c = fscanf(fp1, "%s", oneword); /* got one word from the file */
       fprintf(fout, "%s\n", oneword);       /* display it on the monitor  */
       fprintf(fout, "\n\nOh, I will read just one word. For more you have to PAY ]:) :).\n\n");
       break;
    } while (c != EOF);              /* repeat until EOF           */

    fclose(fp1);
    fclose(fout);
}
