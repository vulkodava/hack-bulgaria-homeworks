#include<alloc.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#define size 20
struct shop{
char name[size];
int quantity;
int price;
struct shop *next;
}*start;
typedef struct shop sh;

char u_name[30];
char u_pass[30];

int i,user,password;
int k=0,l=0;
char add_more;
char c,choice,c1,more;




void create()
{ FILE *fc,*fp;

struct shop *ptr,*temp,*g,*l,*m,*t,*i,*d;
char ch,v[20];
int r,z,w,flag=0;
//the code ***************from here******************
fc=fopen("text.txt","r");
d=(sh*)malloc (sizeof(sh));
d->next=NULL  ;
i=d;
m=d;


while(fscanf(fc,"%s\t%d\t%d",m->name,m->quantity,m->price)!=EOF)
{
d=(sh*)malloc (sizeof(sh));
m->next=d;
m=m->next;

}
m->next=NULL;
fclose(fc);

t=i;

clrscr();
printf("NAME\t\t\tQUANTITY\t\t\t\tPRICE(RS)");

do
{
printf("\n%s ",t->name);
printf("\t\t\t%-20d",t->quantity);
printf("\t\t\t%-40d",t->price);
t=t->next;
}while(t!=NULL);
 getch();
 getch();
//*************till here********the smaller code part above is the code to read in the file which doesnt work correctly
start=i;}  // when i remove this line all the values entered in the file are correct but file is overridden every time i run it
