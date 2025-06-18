//
// Created by Erimsah Olut on 17.06.2025.
//

#include <stdio.h>


void prodCartOrd(int *v1, int d1, int *v2, int d2) {
    int blank;
    for (int j = 1; j < d1; j++) {
        for (int i = 0; i < d1 - j; i++) {
            if (v1[i] > v1[i + 1]) {
                blank = v1[i];
                v1[i] = v1[i + 1];
                v1[i + 1] = blank;
            }
        }
    }
    for (int j = 1; j < d2; j++) {
        for (int i = 0; i < d2 - j; i++) {
            if (v2[i] > v2[i + 1]) {
                blank = v2[i];
                v2[i] = v2[i + 1];
                v2[i + 1] = blank;
            }
        }
    }

    for (int i = 0; i < d1; i++) {
        for (int j = 0; j < d2; j++) {
            printf("(%d %d)\n", v1[i], v2[j]);
        }
    }
}

int main() {
    int v1[] = {2, 1, 3};
    int v2[] = {9, 8, 3, 5, 7, 4, 6};
    int d1 = sizeof(v1) / sizeof(v1[0]);
    int d2 = sizeof(v2) / sizeof(v2[0]);

    prodCartOrd(v1, d1, v2, d2);


    return 0;
}
