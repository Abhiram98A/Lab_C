/*Question: Write a C program to print the following pyramid for a user given positive n(<10).
Sample output for N=4:
1
12
123
1234
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive number (<10): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 10){
        printf("Invalid input\n");
    }
    else{
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}

//Output:
/*
Sample Input/Output: (4), (6), (12)

#1
Enter a positive number (<10): 4
1
12
123
1234

#2
Enter a positive number (<10): 6
1
12
123
1234
12345
123456

#3
Enter a positive number (<10): 12
Invalid input
*/
