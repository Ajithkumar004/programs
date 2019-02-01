#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i=0,cou=0,des=0;
clrscr();
gets(a);
while(a[i]!='\0')
{
i++;
cou++;
}
for(i=0;i<cou;i++)
{
if(a[i]>='a' && a[i]<='z')
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
printf("yes");
}
else
{
printf("no");
}
getch();
}
