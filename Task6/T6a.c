/*Task 6a: Illustrate types of functions in C*/
#include <stdio.h>

// Function types in C (combinations):
// 1) With params, with return value
int add(int a, int b) { return a + b; }

// 2) With params, no return value (void)
void printSum(int a, int b) { printf("Sum = %d\n", a + b); }

// 3) No params, with return value
int getConstant() { return 42; }

// 4) No params, no return value
void greet() { printf("Hello!\n"); }

int main() {
    printf("add(3,5) = %d\n", add(3, 5));
    printSum(3, 5);
    printf("Constant = %d\n", getConstant());
    greet();
    return 0;
}
