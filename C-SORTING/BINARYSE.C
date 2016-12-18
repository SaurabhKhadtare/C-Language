//program for binary search   

#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],i,temp,low,up,mid,n;
clrscr();
printf("\n how many  elements");
scanf("\n %d ",&n);
printf("enter array elements in ascending order");
for(i=0;i<=n;i++)
scanf("%d",&arr[i]);
printf("enter the number that you want to search");
scanf("%d",&temp);
low=0;
up=n-1;
mid=(low+up/2);
while (temp!=arr[mid]&&low<=up)
{
if(temp>arr[mid])
low=mid+1;
else
up=mid-1;
mid=(low+up/2);
}
if(arr[mid]==temp)
printf("%d element found at %d position,temp=mid+1");
if(low>up)
printf("\n number not found");
getch();
}
