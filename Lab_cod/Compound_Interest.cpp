#include<stdio.h>
#include<math.h>

int main()
{
	float principle,rate,time,CI;
	printf("Enter principle: ");
	scanf("%f",&principle);
	printf("Enter time: ");
	scanf("%f",&time);
	printf("Enter rate: ");
	scanf("%f",&rate);
	CI=principle*(pow((1+rate/100),time));
	printf("Compound Interest is:%f",CI);
	
	return 0;
}
