//patterns ---->  NESTED LOOPS
//(1) for the outer loop count the number of line 
//(2) for the inner loop focus on the columns & connect them some how to the rows
//(3) whatever you are printing print them inside the inner for loop


/* pattern 1 */
#include <stdio.h>

int main() {
    int n;
       scanf("%d",&n);

    for (int i = 0; i < n; i++) {         // Loop for rows
        for (int j = 0; j < n; j++) {     // Loop for columns
            printf("* ");
            
        }
        printf("\n");  // Move to the next line after each row
    }
    return 0;
}


