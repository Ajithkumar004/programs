#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,flag,i;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);
while(a<b)
{
flag=0;
for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d ",a);
}
a++;
}
getch();
}
