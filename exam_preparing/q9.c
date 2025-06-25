//
// Created by Erimsah Olut on 21.06.2025.
//

#include <stdio.h>
#include <string.h>

void printCompact(char *word) {
    int strSize = (int) strlen(word);

    for (int i = 0; i < strSize; ++i) {
        if (word[i] == word[i + 1]) {
            int counter = 1;
            printf("%c", word[i]);
            char c = word[i];
            while (c == word[i + 1]) {
                counter++;
                i++;
            }
            printf("%d", counter);
        } else {
            printf("%c", word[i]);
        }
    }
}

int main() {
    char word1[] = "maammma";
    char word2[] = "lollll";
    printCompact(word1);


    return 0;
}
