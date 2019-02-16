#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,i,j=2,count=0;
clrscr();
scanf("%d%d",&l,&r);
for(i=l-1;i<=r;i++)
{
if(i%j!=0 && i!=9)
{
count++;
}
}
printf("%d",count);
getch();
}
