/*Question: Write a C Program to generate the following pattern.
        1
       123
      12345
     1234567
    123456789
     1234567
      12345
       123
        1
*/
#include <stdio.h>

int main() {
    int rows = 9;

    for(int i = 1; i <= rows; i++){
        // number of digits in this row: 1,3,5,7,9,7,5,3,1
        int k = (i <= 5) ? (2*i - 1) : (2*(rows + 1 - i) - 1);

        for(int s = 0; s < (9 - k)/2; s++){
            printf(" ");
        }
        for(int j = 1; j <= k; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

//Output:
/*
        1
       123
      12345
     1234567
    123456789
     1234567
      12345
       123
        1
*/
