#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

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

/* exercise 13
 * say if a random number is odd or even */
void Exercise13() {
    int number;
    printf("enter the number: ");
    scanf("%d", &number);

    if ( number % 2 == 0 ) {
        printf("the number is even\n");
    } else {
        printf("the number is odd\n");
    }
}

/* exercise 14
 * greater, less than, or equal to */
void Exercise14() {
    float value1, value2;

    printf("enter the 1st value: ");
    scanf("%f", &value1);
    printf("enter the 2nd value: ");
    scanf("%f", &value2);

    if ( value1 > value2 ) {
        printf("%.2f is higher than %.2f \n", value2, value1);
    } else if ( value2 > value1 ) {
        printf("%.2f is higher than %.2f \n", value1, value2);
    } else {
        printf("the values are same\n");
    }
}

/* exercise 15
 * complex logic */
void Exercise15() {
    float value1, value2, value3, value4;

    printf("enter the 1st value: ");
    scanf("%f", &value1);
    printf("enter the 2nd value: ");
    scanf("%f", &value2);

    if ( value1 == value2 ) {
        printf("the values are same\n");
    } else if ((int)value1 % 2 == 0) {
        float biggest = value1;
        printf("enter a 3rd one value: ");
        scanf("%f", &value3);
        if (value2 > biggest) biggest = value2;
        if (value3 > biggest) biggest = value3;
        printf("the biggest is %.2f \n", biggest);
    } else {
        printf("enter the 3rd value: ");
        scanf("%f", &value3);
        printf("enter the 4th value: ");
        scanf("%f", &value4);

        int greatestFirst = (value1 > value2 ) ? value1 : value2;
        int greatestLast = (value3 > value4 ) ? value3 : value4;

        if (greatestFirst > greatestLast) {
            printf("biggest between first two: %d | biggest between last two: %d", greatestFirst, greatestLast);
        }else {
            printf("biggest between last two: %d | biggest between first two: %d", greatestLast, greatestFirst);
        }
    }
}

/* exercise 16
 * higher between 3 numbers */
void Exercise16() {
    float number1, number2, number3, biggest;
    printf("enter 1st number : ");
    scanf("%f", &number1);
    printf("enter 2nd number: ");
    scanf("%f", &number2);
    printf("enter 3rd number: ");
    scanf("%f", &number3);

    biggest = number1;
    if (number2 > biggest) biggest = number2;
    if (number3 > biggest) biggest = number3;
    printf("the biggest is %.2f \n", biggest);
}

/* exercise 17
 * payment taxes */
void Exercise17() {
    float price, totalPrice, installment;
    int installmentNumber;

    printf("enter the product price: ");
    scanf("%f", &price);
    do {
        printf("enter the number of installment: ");
        scanf("%d", &installmentNumber);
        if (installmentNumber == 1) {
            totalPrice = price*.025;
        } else if ( installmentNumber < 6) {
            totalPrice = price;
        } else if ( installmentNumber < 11) {
            totalPrice = price*(1+0.06);
        } else if ( installmentNumber <= 15) {
            totalPrice = price*(1+0.13);
        } else {
            printf("invalid value, try again\n");
        }
    } while ( installmentNumber < 1 || installmentNumber >= 16 );

    installment = totalPrice/installmentNumber;

    printf("the price is %.2f\n", price);
    printf("the number of installments is %d \n", installmentNumber);
    printf("the installment is %.2f\n", installment);
    printf("the total price is %.2f\n", totalPrice);
}

/* exercise 18
 * if else nested */
void Exercise18() {
    float weight;
    int age;
    printf("enter the weight: ");
    scanf("%f", &weight);
    printf("enter the age: ");
    scanf("%d", &age);
    if (age < 13) {
        printf("children's category\n");
    } else if (age < 17) {
        if (weight <= 40) {
            printf("category: light youth\n");
        } else {
            printf("category: heavy youth\n");
        }
    }else if (age < 25) {
        if (weight <= 45) {
            printf("category: light senior\n");
        } else if ( weight <= 60) {
            printf("category: middle senior\n");
        } else {
          printf("category: heavy senior\n");
        }
    } else {
        printf("category: veteran\n");
    }
}

/* exercise 19
 * switch case use */
void Exercise19() {
    char character;

    do {
        printf("M - Married\n");
        printf("S - Single\n");
        printf("D - Divorced\n");
        printf("W - Widowed\n");
        printf("Type the letter that corresponds to your marital status: ");

        scanf(" %c", &character);
        character = toupper(character);

        switch (character) {
            case 'M':
                printf("Married\n");
                break;
            case 'S':
                printf("Single\n");
                break;
            case 'D':
                printf("Divorced\n");
                break;
            case 'W':
                printf("Widowed\n");
                break;
            default:
                printf("Invalid option, try again.\n\n");
        }

    } while (character != 'M' && character != 'S' &&
             character != 'D' && character != 'W');
}

/* exercise 20
 * other switch case */
void Exercise20() {
    float ticketPrice, finalPrice;
    char category;

    printf("Enter the ticket price: ");
    scanf("%f", &ticketPrice);

    do {
        printf("\nS - Student\n");
        printf("R - Retired\n");
        printf("N - Normal\n");
        printf("Enter the category: ");

        scanf(" %c", &category);
        category = toupper(category);

        switch (category) {
            case 'S':
                finalPrice = ticketPrice * 0.5;
                printf("50%% discount applied\n");
                break;
            case 'R':
                finalPrice = ticketPrice * 0.7;  // 30% desconto → paga 70%
                printf("30%% discount applied\n");
                break;
            case 'N':
                finalPrice = ticketPrice;
                printf("Without discount\n");
                break;
            default:
                printf("Invalid option, try again.\n");
        }

    } while (category != 'S' && category != 'R' && category != 'N');

    printf("Final price: R$ %.2f\n", finalPrice);
}

int main(void) {
    printf("Hello, World!\n");

    Exercise20();
    return 0;
}