#include<stdio.h>
#include<conio.h>
void main()
{
int a,count=0;
clrscr();
scanf("%d",&a);
while(a)
{
a=a/10;
count++;
}
printf("%d",count);
getch();
}
