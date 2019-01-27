#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i,count=0;
clrscr();
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ')
{
count++;
}
}
printf("%d",count);
getch();
}
