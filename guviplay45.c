#include<stdio.h>
#include<conio.h>
void main()
{
int p,a,i,j,per,area,flag=0;
clrscr();
scanf("%d%d",&p,&a);
for(i=1;i<=(p/2);i++)
{
for(j=1;j<=(p/2);j++)
{
per=2*(i+j);
area=i*j;
if(per==p && area==a)
{
printf("yes");
flag=1;
break;
}
}
if(flag==1)
break;
}
if(flag==0)
{
printf("no");
}
getch();
}
