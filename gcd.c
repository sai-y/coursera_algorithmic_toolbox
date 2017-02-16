#include <stdio.h>

int gcd(a, b){
	if(b == 0){
		return a;
	}
	int a_prime = a % b;

	return gcd(b, a_prime);
}


int main(void){
	printf("The GCD is %d", gcd(3918848, 1653264));
}
