#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int m=0;
int n,k,i,temp=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=1;i<n;i++)
{
m=pow(k,i);
if(m==n)
{
printf("yes");
temp=1;
break;
}
}
if(temp==0)
{
printf("no");
}
getch();
}
