#include <stdio.h>
#include <string.h>

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
    printf("%-8s %d %g %02d/%02d/%04d\n", s.name, s.id, s.gpa, s.date.day, s.date.month, s.date.year);
}

void raise_gpa(struct Student *s) {
    s->gpa += 0.3;
}

void rename_student(struct Student *s, char name[]) {
    strcpy(s->name, name);
}

struct Student create_student(char name[], int id, double gpa, int day, int month, int year) {
    struct Student s;
    strcpy(s.name, name);
    s.id = id;
    s.gpa = gpa;
    s.date = (Date){day, month, year};
    return s;
}

int main() {
    struct Student s = create_student("Kamran", 25, 3.4, 4, 5, 2020);
    print_student(s);

    raise_gpa(&s);
    rename_student(&s, "Kanan");
    print_student(s);
    
    return 0;
}