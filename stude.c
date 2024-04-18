
#include <stdio.h>
#include <stdbool.h> // For boolean data type

int main() {
    char firstName[50];
    char lastName[50];
    int registrationNumber;
    char unit1[50];
    char unit2[50];
    char unit3[50];
    char editChoice; // To store user's choice for editing

    // Input student details
    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Enter your registration number: ");
    scanf("%d", &registrationNumber);

    printf("Enter the names of three units you are taking:\n");
    printf("1. ");
    scanf("%s", unit1);
    printf("2. ");
    scanf("%s", unit2);
    printf("3. ");
    scanf("%s", unit3);

    // Display entered information
    printf("\nStudent Information:\n");
    printf("Name: %s %s\n", firstName, lastName);
    printf("Registration Number: %d\n", registrationNumber);
    printf("Units: %s, %s, %s\n", unit1, unit2, unit3);

    // Ask if the user wants to edit
    printf("\nIs the information correct? (y/n): ");
    scanf(" %c", &editChoice); // Note the space before %c to consume any newline character

    // Loop for editing
    while (editChoice == 'n' || editChoice == 'N') {
        printf("\nEnter the corrected information:\n");
        printf("First Name: ");
        scanf("%s", firstName);
        printf("Last Name: ");
        scanf("%s", lastName);
        printf("Registration Number: ");
        scanf("%d", &registrationNumber);
        printf("Unit 1: ");
        scanf("%s", unit1);
        printf("Unit 2: ");
        scanf("%s", unit2);
        printf("Unit 3: ");
        scanf("%s", unit3);

        printf("\nStudent Information (Updated):\n");
        printf("Name: %s %s\n", firstName, lastName);
        printf("Registration Number: %d\n", registrationNumber);
        printf("Units: %s, %s, %s\n", unit1, unit2, unit3);

        printf("\nIs the updated information correct? (y/n): ");
        scanf(" %c", &editChoice);
    }

    return 0;
}