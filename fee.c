
#include <stdio.h>
#include "fee.h"

void recordFee() {
    struct Fee f;
    FILE *fp = fopen("data/fees.dat", "ab");
    printf("Student ID: "); scanf("%d", &f.studentId);
    printf("Amount: "); scanf("%f", &f.amount);
    fwrite(&f, sizeof(struct Fee), 1, fp);
    fclose(fp);
    printf("Fee recorded.\n");
}