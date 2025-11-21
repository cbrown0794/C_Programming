/*
*/

#include <stdio.h>

// Function Prototypes
/*
    Get the grade
*/
double getGrade(int student_number);
//Return the sum of grades on n students
double sumStudentGrades(int n_students);
double sumStudentGradesSentinel(void);


int main(void){
    double total = sumStudentGradesSentinel();
    printf("%lf\n",total);
    return 0;

}


double getGrade(int student_number) {
    double grade;
    printf("Please enter grade for student %d: ", student_number);
    scanf("%lf", &grade);

    return grade;
}

double sumStudentGrades(int n_students){
    int current_student = 1;
    double total = 0;

    while(current_student <= n_students){
        double grade = getGrade(current_student);
        total += grade;
        current_student++;
    }

    return total;
}

double sumStudentGradesSentinel(void) {
    double total = 0;
    double grade = 0;
    int current_student = 1;

    //sentinel loop
    while(grade != -1){
        grade = getGrade(current_student);
        total += grade;
        current_student++;
    }

    return total;
}