#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j=1;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]!=j)
{
printf("%d",i);
break;
}
j++;
}
getch();
}
