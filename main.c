#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


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
 * show approved if >= 6, exam >= 3, failed <3 */
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

/* exercise 6
 * read 2 values and display the larger one */
void Exercise06() {
    float number1, number2;
    printf("enter the grade of 1st value: ");
    scanf("%f", &number1);
    printf("enter the grade of 2nd value: ");
    scanf("%f", &number2);
    float average = (number1 + number2)/2;

    if (number1 > number2) {
        printf("the highest value is: %.2f \n", number1);
    }
    else {
        printf("the highest value is: %.2f \n", number2);
    }
}

/* exercise 7
 * check if a number is in the range of 1 to 9 */
void Exercise07() {
    int number;
    printf("enter the number: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 9) {
        printf("the number is in the range \n");
    } else {
        printf("the number isn`t in the range \n");
    }
}

/* exercise 8
 * read tge year of birth and check if you can vote in 2026 */
void Exercise08() {
    int birthYear, yearOld, currentYear = 2016;
    printf("enter the birth year: ");
    scanf("%d", &birthYear);
    yearOld = currentYear - birthYear;

    if (yearOld >= 16) {
        printf("this person can vote this year\n");
    } else {
        printf("this person can`t vote this year. you must be 16 years old at least\n");
    }
}

/* exercise 9
 * calculate discount */
void Exercise09() {
    int quantity;
    float total;

    printf("enter apples quantity: ");
    scanf("%d", &quantity);

    do
        if ( quantity >= 1 && quantity <= 12 ) {
        total = quantity*0.3;
    }else if ( quantity > 12 ) {
        total = quantity*0.25;
    }else {
        printf("invalid value\n");
        printf("please try again\n");
        scanf("%d", &quantity);
    } while (quantity < 1);
    printf("the total apples value is: %.2f \n", total);
}

/* exercise 10
 * read 2 values and display them in ascending order */
void Exercise10() {
    float value1, value2;

    printf("enter the 1st value: ");
    scanf("%f", &value1);
    printf("enter the 2nd value: ");
    scanf("%f", &value2);

    if ( value1 > value2 ) {
        printf("%.2f, %.2f \n", value2, value1);
    } else if ( value2 > value1 ) {
        printf("%.2f, %.2f \n", value1, value2);
    } else {
        printf("the values are same\n");
    }
}

/* exercise 11
 * verify password */
void Exercise11() {
    int password;
    printf("enter the password: ");
    scanf("%d", &password);

    if ( password == 1234) {
        printf("access aloowed\n");
    } else {

    }
}

/* exercise 12
 * calculate bmi (body mass index)
 * man (m): (72.7 * h) - 58
 * woman (w): (62.1 * h) - 44.7 */
void Exercise12() {
    float height, idealWeight;
    char gender;
    printf("enter you height (ex 1.75): ");
    scanf("%f", &height);

    printf("enter your gender: (m = man / w = woman\n");

    clearBuffer();

    scanf("%c", &gender);
    if ( gender == 'm') {
        idealWeight = (height*72.7)-58;
    }
    else {
        idealWeight = (height*62.1)-44.7;
    }

    printf("your ideal weight is: %.2f", idealWeight);
}




int main(void) {
    printf("Hello, World!\n");

    Exercise12();
    return 0;
}

