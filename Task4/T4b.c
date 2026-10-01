/*Question: Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome.*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("Invalid input");
    }
    else{
        int rev = 0, sum = 0; //lent = 0;

        for(int i = n; i > 0; i /= 10){
            int remd = i%10;
            sum += remd;
            rev = 10*rev + remd;
            // lent += 1;
        }
        printf("The sum of the digits of %d is %d\n", n, sum);
        
        if(rev == n){
            printf("The Number %d is a palindrome\n", n);
        }
        else{
            printf("The Number %d is NOT a palindrome\n");
        }
    }
    return 0;
}

//Output:
/*
Sample Input/Output: (121), (1234), (4554), (-5)

#1
Enter a positive integer: 121
Sum of digits of 121 = 4
121 is a palindrome.

#2
Enter a positive integer: 1234
Sum of digits of 1234 = 10
1234 is not a palindrome.

#3
Enter a positive integer: 4554
Sum of digits of 4554 = 18
4554 is a palindrome.

#4
Enter a positive integer: -5
Error: Please enter a positive integer.
*/
