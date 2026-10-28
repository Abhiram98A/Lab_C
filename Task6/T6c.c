/*Task 6c: Pointer arithmetic demo*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    printf("Pointer arithmetic demo:\n");
    for (int i = 0; i < 4; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }
    printf("p[2] = %d\n", p[2]);
    p++;
    printf("After p++, *p = %d\n", *p);
    return 0;
}
