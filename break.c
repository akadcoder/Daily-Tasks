#include <stdio.h>

int main(){
    int day;

    // Input marks
    printf("Enter the day: ");
    scanf("%d", &day);

    // Check if the days are valid
    switch(day){
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuedsday");
        break;
        
        case 3:
        printf("wednesday");
        break;
    
        case 4:
        printf("thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;
        
        case 7:
        printf("sunday");
        break;

        default:
        printf("enter valid input");
    }

    

    return 0;
}
