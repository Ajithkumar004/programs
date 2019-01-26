#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,sum=0;
clrscr();
scanf("%d",&n);
while(n)
{
sum+=i;
i++;
n--;
}
printf("%d",sum);
getch();
}
