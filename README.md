# Hostel-Management-System
A console-based application developed in C Language to manage student records, room allocations, and financial tracking in a hostel environment.
## Why I Built This?
This project was created to practice Modular Programming and File Handling in C. Instead of keeping everything in one file, I divided the logic into separate modules (Students, Rooms, Fees, and Complaints) to make the code cleaner and more manageable.
## Key Features...
Student Enrollment: Add new students and store their details permanently.
Data Persistence: Uses binary file handling (.dat files) so data isn't lost when the program closes.
Room Allocation: Manage and assign rooms to specific student IDs.
Fee Tracking: Keep a record of payments made by residents.
Complaint Logs: A dedicated system for students to register their issues.
## Project Structure..
main.c: The core menu and navigation logic.
student.c / .h: Functions for adding and viewing student profiles.
room.c / .h: Logic for room management.
fee.c / .h: Financial record-keeping.
complaint.c / .h: Handling student grievances.
# How to Compile and Run
To run this project on your local machine, ensure you have a C compiler (like GCC) installed.
# CLONE THIS REPOSITORY;
git clone https://github.com/HumairaAijaz/Hostel-Management-System.git.
# COMPILE ALL FILES;
gcc main.c student.c room.c fee.c complaint.c -o hostel.exe.
# RUN THE APPLICATION;
./hostel.exe
Author:Humaira Aijaz
Building and learning ...
