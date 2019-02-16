#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[20];
int l=0,i,temp=0;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if((i==0)&&(s[i]>=91 && s[i]<=120))
{
s[i]=s[i]-32;
}
else if(s[i]==' ')
{
s[i+1]=s[i+1]-32;
temp=i+1;
}
}
for(i=0;i<l;i++)
{
if(i!=0 && i!=temp)
{
if(s[i]>=65 && s[i]<=90)
{
s[i]=s[i]+32;
}
}
}
for(i=0;i<l;i++)
{
printf("%c",s[i]);
}
getch();
}
