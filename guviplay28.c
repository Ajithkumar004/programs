#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[200],b[200];
int i,l,j=0;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]!=' ')
{
b[j]=s[i];
j++;
}
}
b[j]='\0';
printf("%s",b);
getch();
}
