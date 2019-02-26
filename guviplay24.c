#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[40];
int i,l=0,des=0;
clrscr();
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>='a' && s[i]<='z')
{
printf("no");
des++;
break;
}
}
if(des==0)
{
printf("yes");
}
getch();
}
