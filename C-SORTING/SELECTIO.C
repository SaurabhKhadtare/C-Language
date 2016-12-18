//program for selection sort             roll no:153108

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,j,temp;
clrscr();
printf("\n enter the array elements");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<5;i++)
printf("%d",arr[i]);
getch();
}