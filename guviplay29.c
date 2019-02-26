#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,i,j,a[40],k=0,cou=0;
clrscr();
scanf("%d%d",&l,&r);
for(i=l;i<=r;i++)
{
for(j=1;j<100;j++)
{
if(j*j==i)
{
cou++;
}
}
}
printf("%d",cou);
getch();
}

