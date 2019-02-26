#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[400];
int n,i,l;
clrscr();
gets(s);
l=strlen(s);
printf("%c",s[0]);
for(i=3;i<l;i+=3)
{
printf("%c",s[i]);
}
getch();
}

