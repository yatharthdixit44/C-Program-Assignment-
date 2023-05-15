#include<stdio.h>

int main()
{
	float l;
	printf("Enter the length in centimeter:\n");
	scanf("%f",&l);
	printf("In meter=%f",l/100.0);
	printf("\nIn kilometer=%f",l/100000.0);
	
	return 0;
}
