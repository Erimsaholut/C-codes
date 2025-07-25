#include <stdio.h>
#define PINUMBER 3.14159

int main() {
    FILE *fp_read, *fp_write;
    int num_int;
    double result;
    char letter, string[100 + 1];

    if ((fp_read = fopen("../Input.txt", "r")) == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    if ((fp_write = fopen("../Output.txt", "w")) == NULL) {
        printf("Error opening file\n");
        return 2;
    }


    // scanf and printf integer
    printf("Enter a number:");
    scanf("%d", &num_int);
    fflush(stdin);

    printf("The number is: %d\n", num_int);
    fflush(stdout);
    // casting
    result = (double) (num_int) / 3 * PINUMBER;
    printf("The result is: %f\n", result);
    fflush(stdout);
    // scanf and printf char
    printf("Enter character one:");
    fflush(stdout);
    // scanf("%c", &letter);
    scanf(" %c", &letter);
    printf("The character is: %c\n", letter);
    fflush(stdout);
    // getchar and putchar character
    printf("Enter a character two:");
    letter = getchar();
    fflush(stdin);
    printf("The character is: ");
    putchar(letter);
    putchar('\n');
    fflush(stdout);
    // gets and puts string
    printf("Enter a string:");
    fflush(stdout);
    gets(string);
    fflush(stdin);
    printf("The string is: ");
    puts(string);
    fflush(stdout);
    // copying character by character
    // fgetc and fputc string
    while (!feof(fp_read)) {
        letter = fgetc(fp_read);
        if (!feof(fp_read)) {
            fputc(letter, fp_write);
        }
    }
    rewind(fp_read);
    fputs("\n\n", fp_write);
    fflush(fp_write);
    // fgets and fputs string
    while (!feof(fp_read)) {
        fgets(string, 20, fp_read);
        fputs("\n", fp_write);
        fflush(fp_write);
        fputs(string, fp_write);
        fflush(fp_write);
    }
    rewind(fp_read);
    fputs("\n\n", fp_write);
    fflush(fp_write);
    // fscanf and fprintf string
    while (!feof(fp_read)) {
        fscanf(fp_read, "%s", string);
        if (!feof(fp_read)) {
            fprintf(fp_write, "%s", string);
        }
    }
    fclose(fp_read);
    fclose(fp_write);
    return 0;
}
