#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,div=0;
clrscr();
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
div=n/i;
if(div%2!=0)
{
printf("%d",i);
break;
}
}
}
getch();
}
