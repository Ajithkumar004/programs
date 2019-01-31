#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,s=0,s2=0;
clrscr();
scanf("%d%d%d",&l,&b,&h);
s=2*l*b+2*l*h+2*b*h;
s2=l*b*h;
printf("%d %d",s,s2);
getch();
}
