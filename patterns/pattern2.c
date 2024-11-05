/*pattern 2*/
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {        // Loop for the number of lines
        for (int j = 1; j <= i; j++) {    // Loop to print stars in each line
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }
    return 0;
}


