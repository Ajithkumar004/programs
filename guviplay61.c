#include<stdio.h>
#include<conio.h>
void main()
{
int n,x,a[40],i,sum=0;
clrscr();
scanf("%d%d",&n,&x);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
if(sum==x)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
