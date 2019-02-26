#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[200],a[200];
int k,l,l2,count=0,i;
clrscr();
gets(s);
gets(a);
scanf("%d",&k);
l2=strlen(a);
l=strlen(s);
for(i=0;i<l;i++)
{
if(a[i]!=s[i])
{
count++;
}
}
if(count==k)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
