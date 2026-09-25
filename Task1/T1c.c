/*Question: Write a program to print the first three rows of the multiplication table (using printf only)*/
//Program:
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    printf("Multiplication Table of %d:\n", n);
    printf("%d x 1 = %d\n", n, n * 1);
    printf("%d x 2 = %d\n", n, n * 2);
    printf("%d x 3 = %d\n", n, n * 3);

    return 0;
}

//Output:
/*
Enter a number to print its multiplication table: 6
Multiplication Table of 6:
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
*/