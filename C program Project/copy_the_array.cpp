#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int length=sizeof(arr1[10]);
	int arr2[10];
	for(int i=0;i<length;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("Elements of original array:\n");
	for(int i=0;i<length;i++)
	{
		printf("%d",arr1[i]);
	}
	printf("\n");
	printf("Elements of new array:\n");
	for(int i=0;i<length;i++);
	{
		printf("%d ", arr2[i]);  
	}
	
	return 0;
}
