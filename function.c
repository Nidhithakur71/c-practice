
#include<stdio.h>

void akhil();
void vikram();

int main()

{ 
    char ch; 
	printf("enter the c for akhil:-");
	scanf("%c",&ch);
	if(ch=='c')
	{
		akhil();
	}
	else
	
	{
		vikram();
	}
	
    return 0;
  }
	void akhil()
	
	{
		printf("hello akhil");
	}
	
	void vikram()
	{
		printf("hi vikram");
	}



