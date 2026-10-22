#include <stdio.h>

int digit_to_int(char num) {
	return num - '0';
}

int main(void) {
	char num = '2';
	int ans = digit_to_int(num);

	printf("%d\n", ans);
	return 0;
}
