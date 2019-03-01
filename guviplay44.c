#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[300],temp;
int k,i,n,j;
clrscr();
gets(s);
scanf("%d",&k);
n=strlen(s);
for(i=0;i<k;i++)
{
temp=s[n-1];
for(j=n-2;j>=0;j--)
{
s[j+1]=s[j];
}
s[0]=temp;
}
printf("%s",s);
getch();
}
