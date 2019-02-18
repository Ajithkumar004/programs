#include<stdio.h>
#include<conio.h>
void main()
{
char a[30],b[30];
int l=0,l1=0,i,j,cou=0,cou1=0;
clrscr();
gets(a);
gets(b);
l=strlen(a);
l1=strlen(b);
for(i=0;i<l;i++)
{
if(a[i]==a[i+1])
{
cou++;
}
}
for(j=0;j<l1;j++)
{
if(b[j]==b[j+1])
{
cou1++;
}
}
if(cou==cou1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
