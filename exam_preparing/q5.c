//
// Created by Erimsah Olut on 17.06.2025.
//

#include <stdio.h>


void prodCartOrd(int *v1, int d1, int *v2, int d2) {
    int min = v1[0] + v2[0];
    int max = min;
    for (int i = 0; i < d1; i++) {
        for (int j = 0; j < d2; j++) {
            if (v1[i] + v2[j] > max) {
                max = v1[i] + v2[j];
            }
            if (v1[i] + v2[j] < min) {
                min = v1[i] + v2[j];
            }
        }
    }

    int k = min;
    while (k <= max) {
        for (int i = 0; i < d1; i++) {
            for (int j = 0; j < d2; j++) {
                if (v1[i] + v2[j] == k) {
                    printf("(%d %d)\n", v1[i], v2[j]);
                }
            }
        }


        k++;
    }
}

int main() {
    int v1[] = {2, 1, 3};
    int v2[] = {9, 8, 3, 5, 7, 4, 6};
    int d1 = sizeof(v1) / sizeof(v1[0]);
    int d2 = sizeof(v2) / sizeof(v2[0]);
    int l = 0;



    prodCartOrd(v1, d1, v2, d2);


    return 0;
}
