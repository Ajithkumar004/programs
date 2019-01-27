#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp2;
clrscr();
scanf("%d%d",&a,&b);
temp2=a;
a=b;
b=temp2;
printf("%d %d",a,b);
getch();
}
