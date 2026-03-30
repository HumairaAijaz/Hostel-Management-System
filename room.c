
#include <stdio.h>
#include "room.h"

void allocateRoom() {
    struct Room r;
    FILE *fp = fopen("data/rooms.dat", "ab");
    printf("Enter Room Number: "); scanf("%d", &r.roomNumber);
    printf("Enter Student ID to Assign: "); scanf("%d", &r.studentId);
    // Logic to save...
    fwrite(&r, sizeof(struct Room), 1, fp);
    fclose(fp);
}