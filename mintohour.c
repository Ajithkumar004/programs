#include<stdio.h>
#include<conio.h>
void main()
{
int min,h,m,s;
printf("enter min:");
scanf("%d",&min);
h=(min/3600);
m=(min-(3600*h))/60;
s=(min-(3600*h)-(m*60));
printf("h:m:s-%d:%d:%d\n",h,m,s);
getch();
}
