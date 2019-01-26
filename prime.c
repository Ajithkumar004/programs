#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}}
if(n==1)
{
printf("1 is neither prime or not");
}
else
{
if(flag==0)
{
printf("is prime number");
}
else
{
printf("is not a prime number");
}
}
getch();
}
