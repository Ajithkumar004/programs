#include<stdio.h>
#include<conio.h>
void main()
{
int h1,h2,m1,m2,h3,m3;
clrscr();
scanf("%d%d",&h1,&m1);
scanf("%d%d",&h2,&m2);
if(h1>h2 && m1>m2)
{
h3=h1-h2;
m3=m1-m2;
}
else if(h1<h2 && m1<m2)
{
h3=h2-h1;
m3=m2-m1;
}
else if(h1>h2 && m1==m2)
{
h3=h1-h2;
m3=0;
}
else if(h1<h2 && m1==m2)
{
h3=h2-h1;
m3=0;
}
printf("%d %d",h3,m3);
getch();
}
