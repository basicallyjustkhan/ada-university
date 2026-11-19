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
    printf("%-8s %d %g %02d.%02d.%04d\n", s.name, s.id, s.gpa, s.date.day, s.date.month, s.date.year);
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
    // struct Student s = create_student("Kamran", 25, 3.4, 4, 5, 2020);
    // print_student(s);
    // raise_gpa(&s);
    // rename_student(&s, "Kanan");
    // print_student(s);
    
    struct Student sgr[4] = {
        {"Kamran", 25, 3.4, 4, 5, 2020},
        {"Kanan", 26, 3.5, 5, 6, 2021},
        {"Aysel", 27, 3.6, 6, 7, 2022},
        {"Nijat", 28, 3.7, 7, 8, 2023}
    };

    for (int i = 0; i < 4; i++) {
        print_student(sgr[i]);
    }

    return 0;
}