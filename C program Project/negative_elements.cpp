#include<stdio.h>

int main()
{
	int a[10],i,n;
	
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negative elements in array are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
