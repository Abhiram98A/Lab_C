/*Question: Write a program that takes a number from 1-7 and prints the corresponding day of the week using a switch statement*/
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Day 1: Monday\n");
            break;
        case 2:
            printf("Day 2: Tuesday\n");
            break;
        case 3:
            printf("Day 3: Wednesday\n");
            break;
        case 4:
            printf("Day 4: Thursday\n");
            break;
        case 5:
            printf("Day 5: Friday\n");
            break;
        case 6:
            printf("Day 6: Saturday\n");
            break;
        case 7:
            printf("Day 7: Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}

//Output:
/*
Sample Input/Output: (1), (3), (5), (7), (0), (8)

#1
Enter a number (1-7) to get the corresponding day of the week: 1
Day 1: Monday

#2
Enter a number (1-7) to get the corresponding day of the week: 3
Day 3: Wednesday

#3
Enter a number (1-7) to get the corresponding day of the week: 5
Day 5: Friday.

#4
Enter a number (1-7) to get the corresponding day of the week: 7
Day 7: Sunday

#5
Enter a number (1-7) to get the corresponding day of the week: 0
Invalid input. Please enter a number between 1 and 7.

#6
Enter a number (1-7) to get the corresponding day of the week: 8
Invalid input. Please enter a number between 1 and 7.
*/