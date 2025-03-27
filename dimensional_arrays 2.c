//
// Created by Erimsah Olut on 27.03.2025.
//

#define N 3
#define M 3

#include <stdio.h>

int main() {
    int diagonal_matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    const float M2[N][M] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };
    const float V[M] = {1.0, 0.5, 2.0};
    float Y[N];
    int r;

    for (r = 0; r < N; r++) {
        Y[r] = 0.0;
        for (int c = 0; c < M; c++) {
            Y[r] += M2[r][c] * V[c];
        }
    }


    printf("Y sonucu:\n");
    for (r = 0; r < N; r++) {
        printf("Y[%d] = %.2f\n", r, Y[r]);
    }

    return 0;
}
