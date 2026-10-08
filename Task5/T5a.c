/*Question: Write a program that shows the binary equivalent of a given positive number between 0 to 255.*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number between 0 and 255: ");
    scanf("%d", &n);

    if (n < 0 || n > 255){
        printf("Invalid input\n");
    }
    else{
        printf("Binary equivalent of %d is ", n);

        for(int i = 7; i >= 0; i--){
            printf("%d", (n >> i) & 1);
        }
        printf("\n");
    }
    return 0;
}

//Output:
/*
Sample Input/Output: (10), (255), (0), (300)

#1
Enter a number between 0 and 255: 10
Binary equivalent of 10 is 00001010

#2
Enter a number between 0 and 255: 255
Binary equivalent of 255 is 11111111

#3
Enter a number between 0 and 255: 0
Binary equivalent of 0 is 00000000

#4
Enter a number between 0 and 255: 300
Invalid input
*/
