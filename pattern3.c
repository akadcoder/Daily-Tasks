/*#include <stdio.h>

int main() {

    int n; 
    scanf("%d",&n);
        for (int i = 1; i <= n; i++) {        // Loop for the number of lines
        for (int j = 1; j <= i; j++) {    // Loop to print numbers in each line
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }
    return 0;
}
*/

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
