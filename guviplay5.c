#include<stdio.h>
#include<conio.h>
void main()
{
 char a[20];
int i,c=0,d=0,e=0,g;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\'0;i++)
{
if(a[i]=='I')
{
if(a[i+1]=='V')
{
c=4;
i++;
}
else if(a[i]=='X')
{
c=9;
i++;
}
else
{
c++;
}
}
else
{
if(a[i]=='V')
{
d=d+5;
}
if(a[i]=='X')
{
e=e+10;
}
}
}
g=c+d+e;
printf("%d",g);

