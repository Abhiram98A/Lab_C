/*Question: Write a program to find if a given number is even or odd*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    }
    else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

//Output:
/*
Sample Input/Output: 12, 13

#1
Enter a number: 12
12 is an even number.

#2
Enter a number: 13
13 is an odd number
*/