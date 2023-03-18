#include<stdio.h>

int main()
{
	float principle, time, rate, I;
	
	printf("enter principle (amount):");
	scanf("%f", &principle);
	
	printf("enter time:");
	scanf("%f", &time);
	
	printf("enter rate");
	scanf("%f", &rate);
	
	I=(principle* time* rate)/100;
	
	printf("simple interest = %f", I);
	
	return 0;
}
