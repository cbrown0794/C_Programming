/*
Program converts the given number of seconds to HMS

65 seconds -> 0 hours, 1 minute, 5 seconds
*/

#include <stdio.h>

int main(void){
    int seconds = 0;
    puts("Enter the number of seconds");
    scanf("%d", &seconds);

    if (seconds < 0) {
        puts("Seconds can not be negative");
        return 0;
    }

    //calculate the number of minutes
    int minutes = seconds / 60;
    int hours = minutes/60;
    int remaining_seconds = seconds % 60;
    int remaining_minutes = minutes % 60;

    
    if (seconds >=0){
        printf("%d seconds is %d hours, %d minutes, and %d seconds.", seconds, hours, remaining_minutes, remaining_seconds);
    }
    //print the result



    return 0;
}