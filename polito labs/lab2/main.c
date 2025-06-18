//
// Created by Erimsah Olut on 10.04.2025.
//
#include <stdio.h>

int euler(int a, int b) {
    int n = b % a;

    if (n != 0) {
        if (a > b) {
            a = euler(b, n);
        } else if (a < b) { b = euler(a, n); }
    } else {
        printf("%d %d %d \n", a, b, n);
        return a;
    }
}


int main() {
    int a = 34, b = 18;
    printf("Gfc of %d and %d is --> %d ", a, b, euler(a, b));

    return 0;
}
