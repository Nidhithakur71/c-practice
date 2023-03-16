#include<stdio.h>

int main(){
	int i;
	double number, sum=0;
	
	
	for (i=1; i<=10; ++i){
		printf("enter  n%d:", i);
		scanf("%lf", &number);

		if (number<0){
			continue;
	 }
		
		sum+= number;
	}
	printf("sum= %lf", sum);
	return 0;
}
