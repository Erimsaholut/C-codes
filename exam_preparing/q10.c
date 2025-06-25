//
// Created by Erimsah Olut on 22.06.2025.
//

#include <stdio.h>
#include <string.h>

float readScores(char *fileName) {
    FILE *fptr;
    fptr = fopen(fileName, "r");

    int scores[100];
    char score[15];
    int sum = 0, total = 0, failed = 0;

    while (fgets(score, sizeof(score), fptr) != NULL) {

        if (score[8] - '0' == 0) {
            failed++;
        } else {
            int a = (score[8] - '0') * 10 + score[9] - '0';
            sum += a;
            scores[total] = a;
        }
        total++;

    }

    for (int i = 0; i < total; ++i) {
        int same = 1;
        if (scores[i] == 0)
            i++;
        for (int j = i + 1; j < total; ++j) {
            if (scores[i] == scores[j]) {
                same++;
                scores[j] = 0;
            }
        }
        if (scores[i] != 0)
            printf("score %d: %d stundent\n", scores[i], same);
    }
    printf("Average suﬃcient score: %.2f \n", (float) sum / ((float) total - (float) failed));
    fclose(fptr);
    return ((float) total - failed) / total;
}

int main() {
    printf("%.2f", readScores("scores.txt"));

    return 0;
}
