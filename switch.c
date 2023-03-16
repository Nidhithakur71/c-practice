#include<stdio.h>
int main()
{
	char op;
	float num1, num2, result=0;
	printf("enter any one oprator like +, _, *, /:");
	scanf("%c",&op);
	printf("enter the value of oprator num1 and num2:");
	scanf("%f%f",&num1,&num2);
	switch(op)
	{
		case '+':
		result = num1 + num2;
		break;
		case '-':
		result = num1 - num2;
		break;
		case '*':
		result = num1 * num2;
		break;	
		case '/':
		result = num1 / num2;
		break;
		default:
		printf("invalid operator");			
	}
	printf("the value = %f", result);
	return 0;
}
