#include<stdio.h>

int main()
{
	int y;
	scanf("%d",&y);
	
	if(y==0)
	printf("neither positive nor negative");
	
	else if(y < 0)
	printf("negative");
	
	else
	printf("positive");
	
	return 0;
}
