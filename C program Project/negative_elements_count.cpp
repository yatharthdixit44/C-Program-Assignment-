#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i,n,c=0;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	printf("Enter elements of an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		c++;
	}
	printf("Negative elements are:%d",c);
	
	return 0;
}
