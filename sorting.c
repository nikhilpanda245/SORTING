#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
void disp()
{
	int i;
	for(i=0;i<MAX;i++)
	printf("%d, ", arr[i]);
}
void bubble_sort(int arr[])
{
	int i,j;
	int temp[MAX];
	for(i=0;i<MAX;i++)
	for(j=0;j<MAX-1;j++)
	if(arr[j]>arr[j+1])
	{
		temp[j]=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp[j];
	}
	printf("\n\n After Bubble Sorting: ");
	disp();
}
void select_sort(int arr[])
{
	int i,j;
	int temp[MAX];
	for(i=0;i<MAX;i++)
	for(j=i+1;j<MAX;j++)
	if(arr[i]>arr[j])
	{
		temp[i]=arr[i];
		arr[i]=arr[j];
		arr[j]=temp[i];
	}
	printf("\n\n After Selection Sorting: ");
	disp();
}
void insort()
 {
 	int t,i,j;
 	for(i=0;i<MAX;i++)
 	 {
 	 	j=i;
 	 	while(j>0&&arr[j-1]>arr[j])
 	 	 {
 	 	 	t=arr[j];
 	 	 	arr[j]=arr[j-1];
 	 	 	arr[j-1]=t;
 	 	 	j--;
 	 	 }
 	 }
 	printf("\n\n After Insertion Sorting: ");
 	disp();
 } 
int main()
{
	int i;
	printf("\n Enter 5 Numbers: ");
	for(i=0;i<MAX;i++)
	scanf("%d",&arr[i]);
	bubble_sort(arr);
	select_sort(arr);
	insort();
	
}
