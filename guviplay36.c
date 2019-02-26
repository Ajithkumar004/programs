#include<stdio.h>
#include<conio.h>
void main()
{
long long int n,a[40],k,rem=0,count=0;
clrscr();
scanf("%lld",&n);
scanf("%lld",&k);
while(n)
{
rem=n%10;
if(rem==k)
{
count++;
}
n=n/10;
}
printf("%lld",count);
getch();
}
