/*Question: Write a program to print the gcd of two numbers entered by the user. */
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    a = (num1 < 0) ? -num1 : num1;
    b = (num2 < 0) ? -num2 : num2;

    if (a == 0 && b == 0) {
        printf("Error: GCD of 0 and 0 is undefined.\n");
        return 0;
    }

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of %d and %d = %d\n", num1, num2, a);

    return 0;
}

//Output:
/*
Sample Input/Output: (48, 18), (17, 5), (100, 75), (0, 0)

#1
Enter two integers: 48 18
GCD of 48 and 18 = 6

#2
Enter two integers: 17 5
GCD of 17 and 5 = 1

#3
Enter two integers: 100 75
GCD of 100 and 75 = 25

#4
Enter two integers: 0 0
Error: GCD of 0 and 0 is undefined.
*/
