#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,j,k;
clrscr();
printf("\n enter the array elements");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
for(j=1;j<5;j++)
{
k=arr[j];
for(i=j-1;i>=0&&k<arr[i];i--)
arr[i+1]=arr[i];
arr[i+1]=arr[i];
}
for(i=0;i<5;i++)
printf("%d",arr[i]);
getch();
}