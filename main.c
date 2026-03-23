#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* exercise 1
 * read a value and say if its positive or negative, zero are considered positve*/
void Exercise01() {

    float number;
    scanf("%f", &number);

    printf("%f", number);

    if ( number >= 0) {
    printf("number is positive \n");}
    else {
        printf("number is negative \n");
    }
}

/*exercise 2
 *read an integer number and always show as positive*/
void Exercise02() {
    int number;
    scanf("%d", &number);

    if ( number <= 0) {
        number *= -1;
    }
    printf("%d", number);
}

/* exercise 3
 *calculate the average of two grades and congratulate if approved.*/
void Exercise03() {
    float number1, number2;
    printf("enter the grade of 1st assessment: ");
    scanf("%f", &number1);
    printf("enter the grade of 2nd assessment: ");
    scanf("%f", &number2);

    printf("average grade %.2f", (number1 + number2)/2);
    if ( (number1+number2)/2 >= 6) {
        printf("congrats, you passed \n");
    }
}

/* exercise 4
 *same as before, but show a "failed" message*/
void Exercise04() {
    float number1, number2;
    printf("enter the grade of 1st assessment: ");
    scanf("%f", &number1);
    printf("enter the grade of 2nd assessment: ");
    scanf("%f", &number2);

    float average = (number1 + number2)/2;

    if ( average >= 6) {
        printf("congrats, you passed \n");
    }
    else {
     printf("you failed, study more");
    }
}

/* exercise 5
 * show approved if >= 6, exam >= 3, failed <3*/
void Exercise05() {
    float number1, number2;
    printf("enter the grade of 1st assessment: ");
    scanf("%f", &number1);
    printf("enter the grade of 2nd assessment: ");
    scanf("%f", &number2);
    float average = (number1 + number2)/2;

    if ( average >= 6) {
        printf("congrats, you passed \n");
    } else if (average >= 3) {
        printf("exam");
    } else {
        printf("you failed, study more");
    }
}





int main(void) {
    printf("Hello, World!\n");

    Exercise05();
    return 0;
}

