//program  for linear search              

#include<stdio.h>
#include<conio.h>
#define MAX 50
void search(int arr[],int);
void main()
{
int arr[MAX],i,n;
clrscr();
printf("\n enter how many numbers");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
search(arr,n);
getch();
}
void search(int arr[],int n)
{
int i,temp;
printf("\n enter the numbers to find");
scanf("%d",& temp);
for(i=0;i<n;i++)
{
if(arr[i]==temp)
printf("number found at %d position",i+1);
break;
}
if(i>n)
printf("\n number not found");
getch();
}
