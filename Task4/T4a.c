/*Question: A number is said to be Armstrong if the number is equivalent to the sum of cubes of its digits. Write a C program to check whether a given number is Armstrong or not. */
#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

//Output:
/*
Sample Input/Output: (153), (371), (123)

#1
Enter a number: 153
153 is an Armstrong number.

#2
Enter a number: 371
371 is an Armstrong number.

#3
Enter a number: 123
123 is not an Armstrong number.
*/
