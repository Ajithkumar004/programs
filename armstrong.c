#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,sum=0,rem=0,b=0,temp;
clrscr();
printf("enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
b=pow(rem,3);
sum=sum+b;
n=n/10;
}
if(sum==temp)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
