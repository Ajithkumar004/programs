#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 5
void quicksort(int,int);
int arr[MAX_SIZE];
int main()
{
int i;
printf("enter array element");
for(i=0;i<MAX_SIZE;i++)
{
scanf("%d",&arr[i]);
}
quicksort(0,MAX_SIZE-1);
for(i=0;i<MAX_SIZE;i++)
{
printf("\t%d",arr[i]);
}
getch();
}
void quicksort(int f,int l)
{
int i,j,t,p=0;
if(f<l)
{
p=f;
i=f;
j=l;
while(i<j)
{
while(arr[i]<=arr[p] && i<l)
i++;
while(arr[j]>arr[p])
j--;
if(i<j)
{
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
t=arr[p];
arr[p]=arr[j];
arr[j]=t;
quicksort(f,j-1);
quicksort(j+1,l);
}
}
