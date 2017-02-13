#include <stdio.h>

int MaxPairwiseProduct(int* numbers, int sizeofArray) {
  int result = 0;

  for (int i = 0; i < sizeofArray; ++i) {
    for (int j = i + 1; j < sizeofArray; ++j) {
      if (numbers[i] * numbers[j] > result) {
        result = numbers[i] * numbers[j];
      }
    }
  }
  return result;
}

int main(void){
	int n;
	char formatter[100];
	scanf("%d", &n);
	int numbers[n], i = 0;

	while (i < n && scanf("%d", &numbers[i++]) == 1);

	int result = MaxPairwiseProduct(numbers, n);
    printf("%d\n", result);
    return 0;
}