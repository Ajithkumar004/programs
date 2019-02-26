#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[40],des=0,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("yes");
des++;
break;
}
}
if(des==0)
{
printf("no");
}
getch();
}
guvi
