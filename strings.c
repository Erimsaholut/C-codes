#include <stdio.h>

int main() {
    short int x = 32767;
    x = x + 1;
    printf("x = %d\n", x);

    unsigned short int y = 65535;
    y = y + 1;
    printf("y = %u\n", y);

    int a = 7;
    int b = 2;
    float result = a / b;
    printf("Integer division: 7 / 2 = %.2f\n", result);


    return 0;
}
