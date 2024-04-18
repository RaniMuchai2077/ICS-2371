
#include <stdio.h>

// Define the student structure
struct Student {
    char firstName[50];
    int rollNumber;
    float marks;
};

int main() {
    FILE *filePointer;
    struct Student studentInfo;

    // Open a file for appending
    filePointer = fopen("student_records.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Input student details
    printf("Enter student information:\n");
    printf("First Name: ");
    scanf("%s", studentInfo.firstName);
    printf("Roll Number: ");
    scanf("%d", &studentInfo.rollNumber);
    printf("Marks: ");
    scanf("%f", &studentInfo.marks);

    // Write student information to the file
    fprintf(filePointer, "Name: %s\n", studentInfo.firstName);
    fprintf(filePointer, "Roll Number: %d\n", studentInfo.rollNumber);
    fprintf(filePointer, "Marks: %.2f\n", studentInfo.marks);

    // Close the file
    fclose(filePointer);

    printf("Student information written to 'student_records.txt'.\n");

    return 0;
}
