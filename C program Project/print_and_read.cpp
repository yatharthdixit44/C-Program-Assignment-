#include<stdio.h>

int main()
{
	int a[10],i,n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the %d elements of the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Elements in an array are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
