#include<stdio.h>
#include<conio.h>
void main()
{
char s[30],temp;
int i,cou=0,max=0,k;
clrscr();
gets(s);
for(i=0;s[i]!='\0';i++)
{
for(k=i+1;s[k]!='\0';k++)
{
if(s[i]==s[k])
{
cou++;
if(cou>max)
{
max=cou;
temp=s[i];
}
}
}
}
printf("%c",temp);
getch();
}
