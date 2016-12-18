//PROGRAM FOR MERGE SORT           

#include<conio.h>
#include<stdio.h>
#define max1 5
#define max2 5
#define max3 max1+max2
void main()
{
int arr1[max1],arr2[max2],arr3[max3];
int i,j,temp,k;
clrscr();
printf("enter the first array");
for(i=0;i<max1;i++)
scanf("%d",&arr1[i]);
printf("\n enter the second array");
for(i=0;i<max2;i++)
{
for(j=i+1;j<max1;j++)
{
if(arr1[i]>arr1[j])
{
temp=arr1[i];
arr1[i]=arr1[j];
arr1[j]=temp;
}
}
}
for(i=0;i<max2;i++)
{
for(j=i+1;j<max2-1;j++)
{
if(arr2[i]>arr2[j]);
{
temp=arr2[i];
arr2[i]=arr2[j];
arr2[j]=temp;
}
}
}
i=0,j=0,k=0;
while((i<max1)&&(j<max2))
{
if(arr1[i]>arr2[j])
arr3[k++]=arr1[i++];
else
arr3[k++]=arr2[j++];
}
while (i<max1)
arr3[k++]=arr1[i++];
while(j<max2)
arr3[k++]=arr2[j++];
for(i=0;i<max3;i++)
printf("%d ",arr3[i]);
getch();
}

