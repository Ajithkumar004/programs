#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
clrscr();
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
if(i%2!=0)
{
printf("%d ",i);
}
}
}
getch();
}
