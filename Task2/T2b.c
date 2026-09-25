/*Question: Write a program to find the max and min of three given numbers*/
#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find maximum
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Find minimum
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}

//Output:
/*
Sample Input/Output: (5, 10, 3), (7, 2, 9)

#1.
Enter three numbers: 5 10 3
Maximum number: 10
Minimum number: 3

#2
Enter three numbers: 7 2 9
Maximum number: 9
Minimum number: 2
*/