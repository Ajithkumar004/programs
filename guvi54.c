#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0;
clrscr();
scanf("%d",&n);
if(n%2==0)
{
printf("%d",n);
}
else if(n%2!=0)
{
s=n-1;
printf("%d",s);
}
getch();
}
