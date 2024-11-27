//patterns --->  NESTED LOOPS
//(1) for the outer loop count the number of line 
//(2) for the inner loop focus on the columns & connect them some how to the rows
//(3) whatever you are printing print them inside the inner for loop

//pattern 1 

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

//pattern 2 
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

//pattern 3 
#include<stdio.h>
int main(){

    for(int i=1; i <= 5; i++){
    for(int j=1; j<=i; j++){
    printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}


pattern 4 
#include<stdio.h>
int main(){

    for(int i=1; i <= 5; i++){
    for(int j=1; j<=i; j++){
    printf("%d",i);
    }
    printf("\n");
    }
    return 0;
}


//pattern 5
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

//pattern 6
#include<stdio.h>
int main(){

    for(int i=1; i <= 5; i++){
    for(int j=1; j<=5-i+1; j++){
    printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}

//pattern 7
 #include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
