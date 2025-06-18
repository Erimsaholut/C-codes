//
// Created by Erimsah Olut on 17.06.2025.
//
#include <stdio.h>
#include <string.h>

void countAndPrint(char str[], int n) {
    char wowels[] = {'A', 'E', 'I', 'U', 'O', 'a', 'e', 'i', 'u', 'o'};
    int strSize = strlen(str);

    for (int i = 0; i < strSize - 3; i++) {
        int wowelCount = 0;
        for (int j = i; j < i + 4; j++) {
            for (int k = 0; k < strlen(wowels); k++) {
                if (str[j] == wowels[k]) { wowelCount++; }
            }
        }
        if (wowelCount==2) {
            for (int j = i; j < i + 4; j++) {
                printf("%c ", str[j]);
            }
        }
        printf("\n");
    }
}

int main() {
    char myStr[] = "forExample";
    countAndPrint(myStr, 4);

    return 0;
}
