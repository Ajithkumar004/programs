#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,des=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
{
des=0;
}
else
{
des=1;
break;
}
}
if(des==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
