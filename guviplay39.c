#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,m=0,des=3;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
m=pow(i,2);
if(m==n)
{
des=0;
break;
}
}
if(des==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
