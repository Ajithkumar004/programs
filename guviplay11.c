#include<stdio.h>
#include<conio.h>
void main()
{
char day[30];
int i=0;
clrscr();
gets(day);
if(day[i]=='s' || day[i]=='S')
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
