#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,i=0,max=0;
clrscr();
scanf("%d%d",&l,&r);
if(l>r)
{
max=l;
}
else
{
max=r;
}
while(max)
{
if(max%l==0 && max%r==0)
{
printf("%d",max);
break;
}
max++;
}
getch();
}
