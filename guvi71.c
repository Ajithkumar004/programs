#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30],b[20];
clrscr();
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
