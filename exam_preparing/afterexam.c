#include <stdio.h>

int main() {
    char *vet = "ace";
    for (int i = 0; vet[i] != '\0'; i++)
        printf("%s", vet + i);
    return 0;
}