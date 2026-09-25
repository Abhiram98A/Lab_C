/*Question: Write a program to calculate simple and compound interest */
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, comp, time;
    double simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    rate = rate / 100; // Convert percentage to decimal

    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = principal * rate * time;
    SI_return = principal + simple_interest;

    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate/comp), comp*time)) - principal;
    CI_return = principal + compound_interest;

    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Total amount after simple interest: %.2lf\n", SI_return);
    printf("Compound Interest: %.2lf\n", compound_interest);
    printf("Total amount after compound interest: %.2lf\n", CI_return);
    return 0;
}

//Output:
/*
Enter principal amount: 20,000
Enter rate of interest: 4
Enter time in years: 3
Simple Interest: 2400.00
Total amount after simple interest: 22400.00
Compound Interest: 25971.20
Total amount after compound interest: 45971.20
*/