#include <stdio.h>
#include <string.h>

struct book {
	char title[20];
	int year;
	double price;
};

int main(int argc, char *argv[]) {
	struct book book;

	strcpy(book.title, argv[1]);
	book.year = atio(argv[2]);
	book.price = atof(argv[3]);

	printf("Title: %s\nYear: %d\nPrice: %.2f\n", book.title, book.year, book.price);

	return 0;
}