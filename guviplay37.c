#include<stdio.h>

#include<conio.h>

void main()

{
int n,i,a,b,cou=0;

clrscr();

scanf("%d",&n);

for(i=0;i<n;i++)

{

scanf("%d%d",&a,&b);

if(a<b)

{

cou+=1;

}
}

printf("The result is: %d",cou);

getch();

}
