#include<stdio.h>
#include<conio.h>
void main()
{
float n,k=0.1;
int a,i=0;
clrscr();
scanf("%f",&n);
for(i=0;i<9;i++)
{
a=(int)(n+k);
if(a>n)
{
printf("%d",a);
break;
}
else
{
k=k+0.1;
}
}
getch();
}
