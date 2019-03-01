#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int number;
float res,val;
clrscr();
scanf("%d",&number);
val=3.14/180;
res=sin(number*val);
printf("%.1f",res);
getch();
}
