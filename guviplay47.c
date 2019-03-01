#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
if(d==180 && a!=0 && b!=0 && c!=0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
