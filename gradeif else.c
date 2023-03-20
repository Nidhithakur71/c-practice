#include<stdio.h>
int main()
{
	int a;
	printf("enter your marks:-");
	scanf("%d",&a);
	if(a>33,a<85)
	{
	printf("you pass");
	}
	
	else if(a>85,a<90)
	{
		printf("your grade is B");
	}
	else if(a>90)
	{
		printf("your grade is A");
	}
	
	else
	{
		printf("you are fail");
	}
	
}
