/*Question: Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user. */
#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 1){
        printf("Invalid input\n");
    }
    else{
        printf("Prime numbers between 1 and %d: ", n);

        int counter;
        for (int i = 1; i <= n; i++) {
            counter = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    counter += 1;
                }
            }
            if(counter == 2){
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    
    

    return 0;
}

//Output:
/*
Sample Input/Output: (20), (50), (1)

#1
Enter the value of n: 20
Prime numbers between 1 and 20: 2 3 5 7 11 13 17 19 

#2
Enter the value of n: 50
Prime numbers between 1 and 50: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 

#3
Enter the value of n: 1
Prime numbers between 1 and 1: 
*/
