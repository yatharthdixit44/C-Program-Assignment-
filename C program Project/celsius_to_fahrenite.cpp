#include<stdio.h>

int main()
{
	int fahrenite;
	double celsius;
	printf("Enter the temperature in degrees fahrenite:\n");
	scanf("%d",&fahrenite);
	celsius=(fahrenite*9/5)+32;
	printf("The converted temperature is %lf \n",celsius);
	
	return 0;
}
