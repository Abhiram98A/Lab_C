/*Question: Write a program that takes two integers as inputs and one operator (+, -, *, /) as input and performs the operation */
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please enter +, -, *, /, or %%.\n");
    }

    return 0;
}

//Output:
/*
Sample Input/Output: (5, 3, +), (10, 2, -), (4, 6, *), (8, 2, /), (7, 0, /), (9, 3, %)

#1
Enter two integers: 5 3
Enter an operator (+, -, *, /, %): +
Result: 5 + 3 = 8

#2
Enter two integers: 10 2
Enter an operator (+, -, *, /, %): -
Result: 10 - 2 = 8

#3
Enter two integers: 4 6
Enter an operator (+, -, *, /, %): *
Result: 4 * 6 = 24

#4
Enter two integers: 8 2
Enter an operator (+, -, *, /, %): /
Result: 8 / 2 = 4

#5
Enter two integers: 7 0
Enter an operator (+, -, *, /, %): /
Error: Division by zero is not allowed.

#6
Enter two integers: 9 3
Enter an operator (+, -, *, /, %): %
Result: 9 % 3 = 0
*/