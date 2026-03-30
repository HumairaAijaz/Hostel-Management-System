#include <stdio.h>
#include "student.h"

void addStudent() {
    struct Student s;
    FILE *fp = fopen("data/students.dat", "ab");
    if (fp == NULL) { printf("File error!\n"); return; }


    printf("Enter ID: "); scanf("%d", &s.id);
    printf("Enter Name: "); scanf(" %[^\n]", s.name); // Space fix
    printf("Enter Age: "); scanf("%d", &s.age);

    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Student saved successfully!\n");
}

void viewStudent() {
    struct Student s;
    FILE *fp = fopen("data/students.dat", "rb");
    if (fp == NULL) { printf("No data found!\n"); return; }

    printf("\n--- Student List ---\n");
    while(fread(&s, sizeof(struct Student), 1, fp)) {
        printf("ID: %d | Name: %s | Age: %d\n", s.id, s.name, s.age);
    }
    fclose(fp);
}