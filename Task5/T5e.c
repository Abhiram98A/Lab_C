/*Question: Write a C program to print the following pyramid for a user given positive n(<10).
Sample output for N=4:
   1
  121
 12321
1234321
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
            for(int s = 0; s < n - i; s++){
                printf(" ");
            }
            for(int j = 1; j <= i; j++){        // ascending part
                printf("%d", j);
            }
            for(int j = i - 1; j >= 1; j--){    // descending part
                printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}

//Output:
/*
Sample Input/Output: (4), (3), (10)

#1
Enter a positive number (<10): 4
   1
  121
 12321
1234321

#2
Enter a positive number (<10): 3
  1
 121
12321

#3
Enter a positive number (<10): 10
Invalid input
*/
