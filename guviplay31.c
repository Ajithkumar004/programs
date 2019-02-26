#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[300];
int l,i,cou=0,c=0;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='(')
{
cou++;
}
else if(s[i]==')')
{
c++;
}
}
if(cou==c)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
