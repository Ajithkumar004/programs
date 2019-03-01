#include<stdio.h>
#include<conio.h>
void main()
{
long int num;
clrscr();
scanf("%ld",&num);
if(num>=-32768 && num<=32767)
{
printf("INT");
}
else if(num>=-2147483648 && num<=2147483647)
{
printf("INT");

}
getch();
}
