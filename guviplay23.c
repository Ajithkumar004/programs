#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[30],b[40],i,max,max2;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
scanf("%d",&b[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
max2=b[0];
for(i=0;i<n;i++)
{
if(b[i]>max2)
{
max2=b[i];
}
}
printf("%d %d",max,max2);
getch();
}
