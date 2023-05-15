#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,n,even=0,odd=0;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Even elements are:%d",even);
	printf("\nOdd elements are:%d",odd);
	
	return 0;
}
