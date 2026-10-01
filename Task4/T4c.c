/*Question: Write a program to print the frequency of each digit in a given integer. */
#include <stdio.h>

int main() {
    int num, digit, i;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    if (num == 0)
        freq[0] = 1;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    printf("Digit\tFrequency\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] > 0)
            printf("%d\t%d\n", i, freq[i]);
    }

    return 0;
}

//Output:
/*
Sample Input/Output: (112233), (1220450), (0)

#1
Enter an integer: 112233
Digit	Frequency
1	2
2	2
3	2

#2
Enter an integer: 1220450
Digit	Frequency
0	2
1	1
2	2
4	1
5	1

#3
Enter an integer: 0
Digit	Frequency
0	1
*/
