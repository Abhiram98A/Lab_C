/*Question:
Write a program to demonstrate format specifiers in C */
#include <stdio.h>
int main() {
    int n1 = 125, n2 = 65;
    int sum = n1 + n2;
    printf("The sum of %d and %d is %d\n", n1, n2, sum);
    
    //integer variants
    short s = 6;
    long l = 256787, lsum;
    lsum = s + l;
    printf("The sum of short %hd and long %ld is %ld\n", s, l, lsum);

    //float and double
    float rad = 5.6, pi = 3.1415;
    double area = pi * rad * rad;
    printf("The area of circle with radius %.2f is %.4lf\n", rad, area);

    //character
    char ch = 'A';
    printf("The character is %c and its ASCII value is %d\n", ch, ch);
    return 0;
}

//Output:
/*
The sum of 125 and 65 is 190
The sum of short 6 and long 256787 is 256793
The area of circle with radius 5.60 is 98.5200
The character is A and its ASCII value is 65
*/
