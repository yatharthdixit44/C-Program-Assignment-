#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char a[100];
	printf("Enter a string: ");
	scanf("%s",a);
	for(i=0;a[i];i++)
	{
		if(a[i]>=65 && a[i]<=90)
		printf("Uppercases elements are:%c\n",a[i]);
	}
	return 0;
}
