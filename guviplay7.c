#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[40],b[30],c[50];
int l,i,k=0,t=0;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(i%2==0)
{
b[k]=s[i];
k++;
}
else if(i%2!=0)
{
c[t]=s[i];
t++;
}
}
for(i=0;i<t;i++)
{
printf("%c%c",c[i],b[i]);
}
getch();
}
