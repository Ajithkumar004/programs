#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,des=0;
clrscr();
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("yes");
des=1;
break;
}
}
if(des==0)
{
printf("no");
}
getch();
}
