#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Lowercase of a string:%s",strlwr(a));
	
	return 0;
}
