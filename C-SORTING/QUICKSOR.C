//PROGRAM FOR QUICK SORT           ROLL NO:15

#include<stdio.h>
#include<conio.h>
#define MAX 30
enum bool{TRUE,FALSE};
void display(int arr[],int,int);
void quick(int arr[],int,int);
void main()
{
int array[MAX],i,n;
clrscr();
printf("\n enter the no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
display(array,0,n-1);
quick(array,0,n-1);
display(array,0,n-1);
getch();
}
void display(int arr[],int low,int up)
 {
 int i;
for( i=low;i<=up;i++)
printf("\n%d",arr[i]);
}
void quick(int arr[],int low,int up)
{
int piv,temp,left,right;
enum bool pivot_placed=FALSE;
left=low;
right=up;
piv=low;
if(low>=up)
return;
printf("\nsublist");
display(arr,low,up);
while(pivot_placed==FALSE)
{
while (arr[piv]<=arr[right]&& piv!=right)
right=right-1;
if(piv==right)
pivot_placed=TRUE;
if(arr[piv]>arr[right])
{
temp=arr[piv];
arr[piv]=arr[right];
arr[right]=temp;
piv=right;
}
while(arr[piv]>=arr[left] && left!=piv)
left=left+1;
if(piv==left)
pivot_placed=TRUE;
if(arr[piv]<arr[left])
{
temp=arr[piv];
arr[piv]=arr[left];
arr[left]=temp;
piv=left;
}
}
printf("\npivot_placed is %d",arr[piv]);
quick(arr,low,piv-1);
quick(arr, piv+1,up);
}