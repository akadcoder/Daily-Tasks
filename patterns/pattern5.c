/*pattern 5*/
#include <stdio.h>

int main() {

    for (int i = 0; i < 5; i++) {         // Loop for rows
        for (int j = 0; j < 5-i+1; j++) {     // Loop for columns
            printf("* ");
            
        }
        printf("\n");  // Move to the next line after each row
    }
    return 0;
} 

