#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,max=0;
clrscr();
scanf("%d%d",&n,&k);
if(n>k)
{
max=n;
}
else
{
max=k;
}
for(i=max;i>=1;i--)
{
if(n%i==0 && k%i==0)
{
printf("%d",i);
break;
}
}
getch();
}
