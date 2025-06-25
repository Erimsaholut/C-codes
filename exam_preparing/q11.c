//
// Created by Erimsah Olut on 22.06.2025.
//
#include <stdio.h>

float readScores(const char *fileName) {
    FILE *fptr = fopen(fileName, "r");

    int scores[100];
    int sum = 0, total = 0, failed = 0;
    char line[32];

    while (fgets(line, sizeof(line), fptr) != NULL) {
        int score;
        if (sscanf(line, "%*s %d", &score) == 1) {
            scores[total++] = score;
            if (score == 0)
                failed++;
            else
                sum += score;
        }
    }

    int printed[100] = {0};

    for (int i = 0; i < total; ++i) {
        if (printed[i] || scores[i] == 0)
            continue;

        int count = 1;
        printed[i] = 1;
        for (int j = i + 1; j < total; ++j) {
            if (!printed[j] && scores[i] == scores[j]) {
                count++;
                printed[j] = 1;
            }
        }
        printf("score %d: %d student%s\n", scores[i], count, count > 1 ? "s" : "");
    }

    const int successful = total - failed;
    if (successful > 0)
        printf("Average sufficient score: %.2f\n", (float) sum / successful);
    else
        printf("No sufficient scores available.\n");

    fclose(fptr);
    return total > 0 ? (float) successful / total : 0.0f;
}

int main() {
    float passRatio = readScores("scores.txt");
    if (passRatio >= 0)
        printf("Pass ratio: %.2f\n", passRatio);
    return 0;
}
