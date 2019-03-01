#include<stdio.h>
#include<conio.h>
void main()
{
int a[300],i,n=5,j,t=0;
clrscr();
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d",a[1]);
getch();
}
