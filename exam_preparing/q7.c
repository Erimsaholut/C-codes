//
// Created by Erimsah Olut on 20.06.2025.
//
#include <stdio.h>
#include <string.h>

int totalArea(FILE *fp) {
    int grid[101][101] = {0};
    int x1, y1, x2, y2;

    while (fscanf(fp, "%d %d %d %d", &x1, &y1, &x2, &y2) == 4) {
        for (int i = x1; i < x2; i++) {
            for (int j = y1; j < y2; j++) {
                grid[i][j] = 1;
            }
        }
    }

    int total = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (grid[i][j] == 1)
                total++;
        }
    }

    return total;
}


int main() {
    FILE *fptr;
    fptr = fopen("q7.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("total area = %d", totalArea(fptr));

    int arr[] = {1, 2, 3, 4};
    printf("%d\n", *(arr + 2));
    printf("%d\n", *arr+2);


    fclose(fptr);

    return 0;
}
