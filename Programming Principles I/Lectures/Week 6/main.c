#include <stdio.h>

struct book {
	char title[20];
	int year;
	double price;
};

int main(void) {
	struct book book;

	printf("Enter title: ");
	scanf("%19s", book.title);

	printf("Enter ID: ");
	scanf("%d", &book.year);
	
    printf("Enter price: ");
	scanf("%lf", &book.price);

	printf("Title: %s\n", book.title);
	printf("ID: %d\n", book.year);
	printf("Price: %.2f\n", book.price);

	return 0;
}