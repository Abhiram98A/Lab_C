/*Question: Write the calculator program which reads operand1, operator and operand2 as input and displays the
result to execute different operations like addition, subtraction, multiplication, division etc. until user's
choice is exit. */
#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator, choice;

    do {
        printf("Enter expression (operand1 operator operand2): ");
        scanf("%lf %c %lf", &num1, &operator, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator. Please enter +, -, *, or /.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting calculator. Goodbye!\n");

    return 0;
}

//Output:
/*
Sample Input/Output: (5 + 3), (10 / 4), (7 / 0), (6 $ 2), then exit

Enter expression (operand1 operator operand2): 5 + 3
Result: 5.00 + 3.00 = 8.00
Do you want to continue? (y/n): y
Enter expression (operand1 operator operand2): 10 / 4
Result: 10.00 / 4.00 = 2.50
Do you want to continue? (y/n): y
Enter expression (operand1 operator operand2): 7 / 0
Error: Division by zero is not allowed.
Do you want to continue? (y/n): y
Enter expression (operand1 operator operand2): 6 $ 2
Error: Invalid operator. Please enter +, -, *, or /.
Do you want to continue? (y/n): n
Exiting calculator. Goodbye!
*/
