#include <stdio.h>

void main() {

	int sum_of_squares = 0;
	int sum = 0;
	int result;
	int i;

	for (i = 1; i <= 100; i++) {

		sum_of_squares += i * i;
		sum += i;
	}
	printf("result: %d\n", (sum * sum) - sum_of_squares);

}
