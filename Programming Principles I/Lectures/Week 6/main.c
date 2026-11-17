#include <stdio.h>

struct book {
	char title[20];
	int year;
	double price;
};

int main(void) {
	struct book book;

	puts("Enter title, ID, and price:");
	scanf("%19s %d %lf", book.title, &book.year, &book.price);

	printf("Title: %s\nID: %d\nPrice: %.2f\n",
	       book.title, book.year, book.price);

	return 0;
}