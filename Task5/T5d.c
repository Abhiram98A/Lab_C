/*Question: Write a C program to print the following diamond for a user given positive n(<10).
Sample output for N=4:
   1
  121
 12321
1234321
 12321
  121
   1
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
        for(int r = 1; r <= 2*n - 1; r++){
            int i = (r <= n) ? r : (2*n - r);   // peak value of this row

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
Sample Input/Output: (4), (3), (0)

#1
Enter a positive number (<10): 4
   1
  121
 12321
1234321
 12321
  121
   1

#2
Enter a positive number (<10): 3
  1
 121
12321
 121
  1

#3
Enter a positive number (<10): 0
Invalid input
*/
