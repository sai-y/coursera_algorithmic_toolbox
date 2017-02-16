#include <stdio.h>

long long fibonacci(int n){
	long long fibonacci_num[n];
	fibonacci_num[0] = 0;
	fibonacci_num[1] = 1;

	for(int i = 2; i <= n; i++){
		fibonacci_num[i] = fibonacci_num[i-1] + fibonacci_num[i-2];
	}
	return fibonacci_num[n];
}

int main(void){
	int n;
	printf("Enter the value of n\n");
	scanf("%d",  &n);
	printf("The Fibonacci number is %lld\n", fibonacci(n));
	return 0;
}