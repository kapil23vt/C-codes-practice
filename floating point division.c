#include <stdio.h>

void main() {
    int a;
    float b, c, d;
    a = 750;
    b = a / 350; // integer/350 = integer
    c = 750;
    d = c / 350; // float/350 = float
    printf("%f %f", b, d); //2.00 2.14

    printf("\n%d", b); // 0

    printf("\n%d", (int)b); // 0

}
