//
// Created by Erimsah Olut on 18.06.2025.
//

#include <stdio.h>
#include <string.h>
#include <tgmath.h>
#define MAXM 100

int count(char A[][MAXM], int n, int m, char str[]) {
    int str_length = strlen(str);
    int word_counter = 0;

    for (int i = 0; i < n; i++) {
        char row[m];
        for (int j = 0; j < m; j++) {
            printf("%c ", A[i][j]);
            row[j] = A[i][j];
        }
        printf("\n\n");

        for (int k = 0; k <= m - str_length; k++) {
            char test_word[str_length];
            for (int x = k; x < k + str_length; x++) {
                printf("%c", row[x]);
                test_word[x - k] = row[x];
            }
            printf("\n");

            if (strcmp(test_word, str) == 0) {
                printf("%s==%s\n", test_word, str);
                word_counter++;
            }
        }
        printf("\n");
    }


    printf("\n\n\n\n\n\n");


    for (int i = 0; i < m; i++) {
        char column[n];
        for (int j = 0; j < n; j++) {
            printf("%c ", A[j][i]);
            column[j] = A[j][i];
        }
        printf("\n\n");

        for (int k = 0; k <= n - str_length; k++) {
            char test_word[str_length];
            for (int x = k; x < k + str_length; x++) {
                printf("%c", column[x]);
                test_word[x - k] = column[x];
            }
            printf("\n");

            if (strcmp(test_word, str) == 0) {
                printf("%s==%s\n", test_word, str);
                word_counter++;
            }
        }
        printf("\n");
    }
    return word_counter;
}


int main() {
    const int n = 5;
    const int m = 5;

    char A[5][MAXM] = {
        {'x', 'c', 'e', 'c', 'a'},
        {'w', 'a', 'e', 'c', 'q'},
        {'c', 't', 'p', 'a', 'z'},
        {'a', 'c', 'a', 't', 'f'},
        {'t', 'c', 'a', 't', 'f'}
    };
    printf("%d", count(A, n, m, "cat"));
    return 0;
}
