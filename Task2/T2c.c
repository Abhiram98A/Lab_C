/*Question: Write a program to find if a given number is positive, negative, or zero*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    }
    else if (number < 0) {
        printf("%d is a negative number.\n", number);
    }
    else {
        printf("The number is zero.\n");
    }

    return 0;
}

//Output:
/*
Sample Input/Output: 5, -3, 0

#1
Enter a number: 5.00
5 is a positive number.

#2
Enter a number: -3
-3 is a negative number.

#3
Enter a number: 0
The number is zero.
*/