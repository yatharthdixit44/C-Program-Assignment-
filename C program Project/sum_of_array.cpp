#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,n,sum=0;
	
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	
	printf("Enter elements in an array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("Sum of an array is: %d",sum);
	
	return 0;
}
