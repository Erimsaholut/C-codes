#include <stdio.h>

void Butterfly(int x, char c) {
    int i, j, k;
    for (i = 0; x > i; i += 2) {
        for (j = 0; i > j; j++) {
            printf(" ");
        }
        for (k = 0; x - i > k; k++)
            printf("%c ", c);

        printf("\n");
    }

    for (i = x; i > 0; i -= 2) {//97531
        for (j = 0; i - 1 > j; j++) {
            printf(" ");
        }
        for (k = 0; x - i + 1 > k; k++)
            printf("%c ", c);

        printf("\n");
    }


}

int main() {
    int x;
    char c;
    printf("Please enter a character for butterfly's drawing: \n");
    scanf("%c", &c);
    printf("%c\n", c);

    do {
        printf("Please enter the size of butterfly as a odd number: \n");
        scanf("%d", &x);
    } while (x % 2 == 0);

    Butterfly(x, c);
}