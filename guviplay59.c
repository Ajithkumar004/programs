#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0,a[40];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==0)
{
c=i;
}
}
for(i=0;i<c;i++)
{
if(a[i]!=0)
{
printf("%d",a[i]);
}
}
getch();
}
