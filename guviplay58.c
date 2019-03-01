#include<stdio.h>
#include<conio.h>
void main()
{
char s[200],k[20];
int i=0,n=0,j=0,m=0,t=0,cou=0;
clrscr();
gets(s);
gets(k);
while(s[i]!='\0')
{
i++;
n++;
}
while(k[j]!='\0')
{
j++;
m++;
}
j=0;
for(i=0;i<n;i++)
{
if(s[i]==k[j] && s[i]!=' ')
{
j++;
if(s[i]==' ')
{
j=0;
}
if(j==m)
{
t++;
j=0;
}
}
}
printf("%d",t);
getch();
}


