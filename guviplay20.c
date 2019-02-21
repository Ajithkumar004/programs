#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[30];
int l,i;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='Z')
{
s[i]=s[i]-23;
}
else if(s[i]=='Y')
{
s[i]=s[i]-24;
}
else if(s[i]=='X')
{
s[i]=s[i]-25;
}
else
{
s[i]=s[i]+3;
}
}
for(i=0;i<l;i++)
{
printf("%c",s[i]);
}
getch();
}
