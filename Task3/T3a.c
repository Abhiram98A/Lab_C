/*Write a program that takes a student's cgpa and assigns a grade based on the following criteria:
 * CGPA >= 9.0: A
 * between 8.0 and 9.0: A+
 * between 7.0 and 8.0: B+
 * between 6.0 and 7.0: B
 * between 5.0 and 6.0: c
 * between 4.0 and 5.0: D
 * CGPA < 4.0: F
 */
#include <stdio.h>

int main() {
    float cgpa;

    printf("Enter the student's CGPA (between 0 and 10): ");
    scanf("%f", &cgpa);

    if (cgpa >= 9.0 && cgpa <= 10.0) {
        printf("Grade: A\n");
    }
    else if (cgpa >= 8.0) {
        printf("Grade: A+\n");
    }
    else if (cgpa >= 7.0) {
        printf("Grade: B+\n");
    }
    else if (cgpa >= 6.0) {
        printf("Grade: B\n");
    }
    else if (cgpa >= 5.0) {
        printf("Grade: C\n");
    }
    else if (cgpa >= 4.0 && cgpa < 5.0) {
        printf("Grade: D\n");
    }
    else if (cgpa < 4.0 && cgpa >= 0.0) {
        printf("Grade: F\n");
    }
    else {
        printf("Invalid CGPA.\n");
    }

    return 0;
}

//Output:
/*
Sample Input/Output: (9.5), (8.5), (7.5), (6.5), (5.5), (4.5), (12.3), (-1.4)

#1
Enter the student's CGPA (between 0 and 10): 9.5
Grade: A

#2
Enter the student's CGPA (between 0 and 10): 8.5
Grade: A+

#3
Enter the student's CGPA (between 0 and 10): 7.5
Grade: B+

#4
Enter the student's CGPA (between 0 and 10): 6.5
Grade: B

#5
Enter the student's CGPA (between 0 and 10): 5.5
Grade: C

#6
Enter the student's CGPA (between 0 and 10): 4.5
Grade: D

#7
Enter the student's CGPA (between 0 and 10): 12.3
Invalid CGPA.

#8
Enter the student's CGPA (between 0 and 10): -1.4
Invalid CGPA.
*/