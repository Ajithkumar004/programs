#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[100][300],tname[100][300],temp[40];
int i,j,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",name[i]);
strcpy(tname[i],name[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(name[i],name[j])>n)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
for(i=0;i<n;i++)
{
printf("%s ",name[i]);
}
getch();
}

