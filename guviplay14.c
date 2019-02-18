#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[400];
int l,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%c",&s[i]);
}
l=n;
for(i=0;i<=l;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
{
s[i]='&';
}
}
for(i=l;i>=0;i--)
{
if(s[i]!='&')
{
printf("%c",s[i]);
}
}
getch();
}
