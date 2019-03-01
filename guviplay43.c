#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[30],a[30];
int n,m,cou=0,i,j;
clrscr();
gets(s);
gets(a);
n=strlen(s);
m=strlen(a);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==s[j])
{
cou++;
}
}
}
if(cou==m)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
