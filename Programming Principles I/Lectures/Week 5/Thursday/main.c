#include <stdio.h>
#include <string.h>

int string_to_int(char str[]) {
	int result = 0;
	int length = strlen(str);

	for (int i = 0; i < length; i++) {
		int digit = str[i] - '0';
		result = result * 10 + digit;
	}
	return result;
}

int main(void) {
	char str[100];
	scanf("%s", str);

	printf("%d\n", string_to_int(str));
	return 0;
}
