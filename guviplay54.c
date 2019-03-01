#include<stdio.h>
#include<conio.h>
void main()
{
char s[30],a[30];
int i=0,n=0,cou=0;
clrscr();
gets(s);
gets(a);
while(s[i]!='\0')
{
i++;
n++;
}
for(i=0;i<n;i++)
{
if(s[i]==a[i])
{
cou++;
}
}
if(cou==n)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
