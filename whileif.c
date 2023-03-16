#include<stdio.h>

int main()
{
	int i=2;
	while(i<30)
	{
	if(i==22)
	{
	   i++;
	   continue;
	}
	printf("%d\n",i);
	i++;
	}
	return 0;
}
