/*Task 6b: Sine series using functions*/
#include <stdio.h>
#include <math.h>

float factorial(int n) {
    float f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

float sineSeries(float x, int terms) {
    float sum = 0;
    for (int n = 0; n < terms; n++) {
        float sign = (n % 2 == 0) ? 1 : -1;
        float term = sign * pow(x, 2 * n + 1) / factorial(2 * n + 1);
        sum += term;
    }
    return sum;
}

int main() {
    float x = 1.0;
    printf("sin(%.2f) approx = %.4f\n", x, sineSeries(x, 5));
    return 0;
}
