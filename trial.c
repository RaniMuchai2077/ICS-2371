#include <stdio.h>
int main(){
    
    int i, ages[12];
    printf("Enter ages:");
    for (i=0;i<12;i++){
        scanf("%d", &ages[i]);
    }
    
    ///12 32 45 67 89 23 21 25 45 67 90 13
    printf("The ages you entered are:\n");
    for (i=0;i<12;i++){
        printf("%d",ages[i]);
    } 
    printf("\n");    
    // Replace the near-middle value (index size/2) with a new value
    int MiddleAge = 12 / 2;
    ages[MiddleAge] = 45;

 // Print the updated array
    printf("After replacing near-middle value:\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");
    // Delete the near-middle value (index 12 / 2)
    int NearMiddleAge = 12 / 2;
    for (i = NearMiddleAge; i < 11; i++) {
        ages[i] = ages[i + 1];
    }

    // Decrement the array size
    int newSize = 11;

    printf("After deleting near-middle value:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");




    }
    
