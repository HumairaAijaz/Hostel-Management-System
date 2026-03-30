#include <stdio.h>
#include "student.h"
#include "room.h"
#include "fee.h"
#include "complaint.h"

int main() {
    int choice;
    while(1) {
        printf("\n==== Hostel Management System ====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Allocate Room\n");
        printf("4. Record Fee\n");
        printf("5. Lodge Complaint\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudent(); break;
            case 3: allocateRoom(); break;
            case 4: recordFee(); break;
            case 5: lodgeComplaint(); break;
            case 6: return 0;
            default: printf("Invalid choice, try again!\n");
        }
    }
    return 0;
}