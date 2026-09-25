/*Question: Write a program to find if a given number is divisible by a given number*/
#include <stdio.h>

int main() {
    int number, divisor;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Divisor cannot be zero.\n");
    }
    else if (number % divisor == 0) {
        printf("%d is divisible by %d.\n", number, divisor);
    }
    else {
        printf("%d is not divisible by %d.\n", number, divisor);
    }

    return 0;
}

//Output:
/*
Sample Input/Output: (10, 2), (10, 3), (10, 0)

#1
Enter a number: 10
Enter a divisor: 2
10 is divisible by 2.

#2
Enter a number: 10
Enter a divisor: 3
10 is not divisible by 3.00

#3
Enter a number: 10
Enter a divisor: 0
Error: Divisor cannot be zero.
*/