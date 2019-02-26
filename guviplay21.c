#include<stdio.h>
#include<conio.h>
void main()
{
	int s[30],s1[30],s2[30];
	clrscr();
	scanf("%s\n",&s);
	scanf("%s\n",&s1);
	scanf("%s\n",&s2);
	if((s[0]=s1[0]=s2[0])||(s[1]=s1[1]=s2[1]))
	{
	printf("yes");
	}
	else if((s[0]=s[1])&&(s1[0]=s1[1])&&(s2[0]=s2[1]))
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
getch();
}


