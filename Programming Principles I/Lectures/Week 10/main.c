#include <stdio.h>

typedef struct Date {
	int day;
	int month;
	int year;
} Date;

struct Student {
	char name[20];
	int id;
	double gpa;
	Date date;
};

void print_student(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("GPA: %g\n", s.gpa);
    printf("Date: %02d/%02d/%04d\n", s.date.day, s.date.month, s.date.year);
}

void raise_gpa(struct Student *s) {
    s->gpa += 0.3;
}

int main() {
    struct Student s = {"Kamran", 25, 3.4, {4, 5, 2020}};
    print_student(s);

    raise_gpa(&s);
    print_student(s);
    
    return 0;
}