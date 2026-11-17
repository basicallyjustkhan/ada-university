#include <stdio.h>

struct student {
	char name[20];
	int id;
	double gpa;
};

int main(void) {
	struct student student;

	printf("Enter name: ");
	scanf("%19s", student.name);

	printf("Enter ID: ");
	scanf("%d", &student.id);
	
    printf("Enter GPA: ");
	scanf("%lf", &student.gpa);

	printf("Name: %s\n", student.name);
	printf("ID: %d\n", student.id);
	printf("GPA: %.2f\n", student.gpa);

	return 0;
}