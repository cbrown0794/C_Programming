/*
    Introduction to functions.


    Function Format:

        <return_type> <name>(<input parameters>){
            //Function Body
        }

    Cant create a function in another function
*/


#include <stdio.h>



//Create a function that doesnt return any value and doesnt take any values
void print_course(void){
    printf("You are in COP 2271!\n");

}

//A function that doesnt return a value and takes a integer
void print_course_w_number(int course_number){
    if (course_number == 2271){
        printf("You are in the best %d course\n", course_number);
    } else {
        printf("You are in the course %d\n", course_number);
    }

}



int main(void){
    //Call the Function
    print_course();

    print_course_w_number(1234);
    int number = 2271;
    print_course_w_number(number);

    return 0;
}