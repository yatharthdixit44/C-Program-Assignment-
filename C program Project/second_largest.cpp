#include<stdio.h>
#include<limits.h>

int main()
{
	int a[10],i,n,max1,max2;
	printf("Enter the siz eof an array: ");
	scanf("%d",&n);
	
	printf("Enter elements in an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=max2=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
		max2=max1;
		max1=a[i];
		}
	}
		else if(a[i]>max2 && a[i]<max1)	
	{
	max2=a[i];
	}	
	
	printf("First largest:%d",max1);
	printf("Second largest:%d",max2);
	
	return 0;
}
