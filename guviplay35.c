#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[300];
int i,l,j,des=0;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
des=0;
for(j=i+1;j<l;j++)
{
if(s[i]==s[j])
{
s[j]='$';
des++;
}
}
if(des>0)
{
s[i]='$';
}
}
for(i=0;i<l;i++)
{
if(s[i]!='$')
{
printf("%c",s[i]);
}
}
getch();
}
