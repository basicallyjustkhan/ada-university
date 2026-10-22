#include <stdio.h>

#define N 5

int count(const int array[],int number)
{
	int total = 0;

	for (int i = 0; i < N; i++) {
		if (array[i] == number) {
			total++;
		}
	}

	return total;
}

int main(void)
{
	int numbers[N] = {5, 3, 16, 16, 7};
	int target = 16;

	printf("Count: %d\n", count(numbers, target));

	return 0;
}