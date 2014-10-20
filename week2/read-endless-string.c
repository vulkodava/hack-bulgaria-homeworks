#include<stdio.h>
 
int main(void)
{
    int   i = 2, j = 0;;
    char  *string;
     
    printf("Enter any string: \n");
     
    string = malloc(sizeof(char));
    while((string[j] = getchar()) != '\n')
    {
         string = (char *) realloc(string, sizeof(char) * i);
         i++;
         j++;
    }
     
    string[j] = '0';
    printf("%s",string);
    system("pause");
}
