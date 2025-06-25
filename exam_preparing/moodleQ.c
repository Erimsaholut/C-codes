//
// Created by Erimsah Olut on 22.06.2025.
//

#include <stdio.h>
#include <string.h>

// myprog1: reverse print of substrings

void myprog1(char *s, int n) {
    char *p = s + n;
    while (p >= s)
        printf("%s ", p--);
    printf("\n");
}

// myprog2: reverse print of characters
void myprog2(char *s, int n) {
    char *p = s + n;
    while (p >= s) {
        printf("%c ", *p);
        p--;
    }
    printf("\n");
}

// myprog3: forward print of substrings
void myprog3(char *s, int n) {
    char *p = s + n;
    while (s != p)
        printf("%s ", s++);
    printf("\n");
}

// myprog4: returns pointer to first different char
char *myprog4(char *s, char *p) {
    while (*s == *p) {
        s++;
        p++;
    }
    return s;
}

int main() {
    char text[] = "home";

    printf("N.1 myprog1(text, strlen(text)-1):\n");
    myprog1(text, strlen(text) - 1);

    printf("N.2 myprog2(text, strlen(text)-1):\n");
    myprog2(text, strlen(text) - 1);

    printf("N.3 myprog3(text, strlen(text)-1):\n");
    myprog3(text, strlen(text) - 1);

    printf("N.4 printf(\"%%s\", myprog4(\"sweethome\", \"sweetdream\")):\n");
    printf("%s\n", myprog4("sweethome", "sweetdream"));

    printf("N.5 printf(\"%%s\", myprog4(\"world\", \"myworld\")):\n");
    printf("%s\n", myprog4("world", "myworld"));

    printf("N.6 printf(\"%%s\", myprog4(text, \"\")):\n");
    printf("%s\n", myprog4(text, ""));

    return 0;
}
