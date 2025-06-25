//
// Created by Erimsah Olut on 17.06.2025.
//

#include <stdio.h>
#include <string.h>

int charErase(char myStr[], int pos[]) {
    int posSize = 0;
    int strSize = strlen(myStr);

    char newStr[strSize];

    while (pos[posSize] != -1) {
        posSize++;
    }
    char charsToDelete[posSize];
    for (int i = 0; i < posSize; i++) {
        charsToDelete[i] = myStr[pos[i]];
    }

    for (int i = 0; i < strSize; i++) {
        char selectedChar = myStr[i]; // S

        for (int j = 0; j < posSize; j++) {
            if (strcmp(charsToDelete[i], selectedChar)) {
                continue;
            }
        }
    }

    return posSize;
}

int main() {
    char myString[] = "ThisIsAString";
    int posList[] = {7, 4, 2, 0, 11, -1};
    charErase(myString, posList);

    return 0;
}
