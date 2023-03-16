#include<stdio.h>

int fibonacci(int i){
	
	if(i==1){
		return 1;
	}
	
	if(i==2){
		return 2;
	}
	return fibonacci(i-1) + fibonacci(i-2);
}


int main() {
	
	int i;
	
	for (i = 1; i < 20; i++){
		printf("%d\t\n", fibonacci(i));
	}
	
	return 0;
}
