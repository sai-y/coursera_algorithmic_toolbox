#include <stdio.h>

long long MaxPairwiseProduct(int* numbers, int sizeofArray) {
  long long result = 0;

  /* Find the highest element */
  int max_num1 = -1;
  for(int i = 0; i < sizeofArray; i++){
  	if(max_num1 == -1 || numbers[i] > numbers[max_num1]){
  		max_num1 = i;
  	}
  }

  /* Find the second highest element */
  int max_num2 = -1;
  for(int i=0; i < sizeofArray; i++){
  	if(numbers[i] != numbers[max_num1] && (max_num2 == -1 || numbers[i] > numbers[max_num2])){
  		max_num2 = i;
  	}
  }
  return ((long long)numbers[max_num1]) * numbers[max_num2];
}

int main(void){
	int n;
	char formatter[100];
	scanf("%d", &n);
	int numbers[n], i = 0;

	while (i < n && scanf("%d", &numbers[i++]) == 1);

	long long result = MaxPairwiseProduct(numbers, n);
    printf("%lld\n", result);
    return 0;
}