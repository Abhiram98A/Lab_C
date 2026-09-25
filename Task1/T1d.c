/*Question: Write a program to convert temperature from Celsius to Fahrenheit*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}

//Output:
/*
Enter temperature in Celsius: 62
62.00 Celsius is equal to 143.60 Fahrenheit
*/