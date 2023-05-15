#include<stdio.h>
#include<math.h>

int main()
{
	float side,area;
	printf("Enter side of an equilateral triangle: ");
	scanf("%f",&side);
	area=(sqrt(3)/4)*(side*side);
	printf("Area of an equilateral traingle is:%f",area);
	
	return 0;
}
