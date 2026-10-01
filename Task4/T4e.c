/*Question: A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1.
Subsequent terms are found by adding the preceding two terms in the sequence.
Write a C program to generate the first n terms of the sequence.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive number of terms.\n");
        return 0;
    }

    printf("Fibonacci sequence: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}

//Output:
/*
Sample Input/Output: (10), (1), (5), (0)

#1
Enter the number of terms: 10
Fibonacci sequence: 0 1 1 2 3 5 8 13 21 34 

#2
Enter the number of terms: 1
Fibonacci sequence: 0 

#3
Enter the number of terms: 5
Fibonacci sequence: 0 1 1 2 3 

#4
Enter the number of terms: 0
Error: Please enter a positive number of terms.
*/
