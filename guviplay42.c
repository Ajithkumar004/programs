#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[50],i,cou=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
cou++;
}
}
if(cou==n-1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
