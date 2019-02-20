#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[30],i,j,count=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j] && i!=j)
{
count++;
}
}
if(count==0)
{
printf("%d",a[i]);
}
}
getch();
}
