
#include <stdio.h>
#include "complaint.h"

void lodgeComplaint() {
    struct Complaint c;
    FILE *fp = fopen("data/complaints.dat", "ab");
    printf("Student ID: "); scanf("%d", &c.studentId);
    printf("Complaint: "); scanf(" %[^\n]", c.detail);
    fwrite(&c, sizeof(struct Complaint), 1, fp);
    fclose(fp);
}