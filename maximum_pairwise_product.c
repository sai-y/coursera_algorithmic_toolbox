#include <stdio.h>

long long MaxPairwiseProduct(int* numbers, int sizeofArray) {
  long long result = 0;

  for (int i = 0; i < sizeofArray; ++i) {
    for (int j = i + 1; j < sizeofArray; ++j) {
      if (((long long)numbers[i]) * numbers[j] > result) {
        result = ((long long)numbers[i]) * numbers[j];
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

	long long result = MaxPairwiseProduct(numbers, n);
    printf("%lld\n", result);
    return 0;
}