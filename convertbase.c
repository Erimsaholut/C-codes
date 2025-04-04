//
// Created by Erimsah Olut on 4.04.2025.
//
#include <stdio.h>
#include <string.h>

void solution1(int base10) {
    int num;
    char temp[16] = "";
    char base2[16] = "";
    char bit[2];

    while (base10 > 0) {
        num = base10 % 2;
        base10 = base10 / 2;

        sprintf(bit, "%d", num);
        strcat(temp, bit);
    }

    int len = strlen(temp);
    for (int i = 0; i < len; i++) {
        base2[i] = temp[len - 1 - i];
    }
    base2[len] = '\0';

    printf("Binary: %s\n", base2);
}

char solution2(int n) {
    int p;
    for (p = 1; 2 * p <= n; p = p * 2) {}
    while (p > 0) {
        if (p <= n) {
            printf("1");
            n = n - p;
        } else printf("0");
        p = p / 2;
    }
    printf("\n");
}


int main() {
    const int base10 = 44;
    solution2(base10);

    return 0;
}
