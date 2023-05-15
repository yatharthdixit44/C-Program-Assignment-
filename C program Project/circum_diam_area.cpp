#include<stdio.h>

int main()
{
	float r;
	printf("Enter the radius: ");
	scanf("%f",&r);
	printf("Diameter:%f",2.0*r);
	printf("\nCircumference:%f",2*3.14*r);
	printf("\nArea:%f",3.14*r*r);
	
	return 0;
}
