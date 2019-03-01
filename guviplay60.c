#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[300],b[300];
int i,j,l=0,l2=0,cou=0;
clrscr();
gets(a);
gets(b);
l=strlen(a);
l2=strlen(b);
for(i=0;i<l;i++)
{
if(a[i]==b[i])
{
cou++;
}
}
if(cou==l-1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

