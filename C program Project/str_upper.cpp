#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Uppercase of a string:%s",strupr(a));
	
	return 0;
}
