/*Question: Write a program that finds the largest of three numbers using nested if-else statements*/
#include <stdio.h>

int main() {
    float num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            max = num1;
        } else {
            max = num3;
        }
    } else {
        if (num2 >= num3) {
            max = num2;
        } else {
            max = num3;
        }
    }

    printf("The largest number is: %.2f\n", max);
    return 0;
}

//Output:
/*
Sample Input/Output: (5, 10, 3), (7, 2, 9), (1, 1, 1)

#1
Enter three numbers: 5 10 3
The largest number is: 10.00

#2
Enter three numbers: 7 2 9
The largest number is: 9.00

#3
Enter three numbers: 1 1 1
The largest number is: 1.00
*/