//program for bubble sort          


#include<stdio.h>
#include<conio.h>
void bubble_sort(int,int arr[]);
void main()
{
int arr[5],n=5;
clrscr();
bubble_sort(n,arr);
}
void bubble_sort(int n,int arr[])
{
int i,j,temp;
printf("\n enter the array elements");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
for (i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\n the sorted elements are:");
for(i=0;i<n;i++)
printf("%d",arr[i]);
getch();
}
