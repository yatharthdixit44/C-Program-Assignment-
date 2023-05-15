#include<stdio.h>
int main()
{
	float celsius,fahrenite;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&celsius);
	fahrenite=(1.8)*celsius+32;
	printf("\n%f deg celsius is %f fahremnhite\n",celsius,fahrenite);
	
	return 0;
}
