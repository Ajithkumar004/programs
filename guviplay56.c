#include<stdio.h>
#include<conio.h>
void main()
{
char s[200],k;
int i=0,n=0,t=0;
clrscr();
gets(s);
scanf("%c",&k);
while(s[i]!='\0')
{
i++;
n++;
}
for(i=0;i<n;i++)
{
if(s[i]==k)
{
t=i;
break;
}
}
printf("%d",t+1);
getch();
}
