//
// Created by Erimsah Olut on 10.04.2025.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void writeToTheFile(FILE *f_read, FILE *f_write, char line[], char mode) {
    while (fgets(line, sizeof(line), f_read) != NULL) {
        if (mode == 'U') {
            for (int i = 0; i < strlen(line); i++) {
                line[i] = toupper(line[i]);
            }
            fprintf(f_write, "%s", line);
        } else {
            for (int i = 0; i < strlen(line); i++) {
                line[i] = tolower(line[i]);
            }
            fprintf(f_write, "%s", line);
        }
    }
}


int main() {
    FILE *f_read, *f_write;
    char user_choice;
    char line[100];

    if ((f_read = fopen("myLab1InspiredCode/song.txt", "r")) == NULL) {
        printf("Error in opening the input file\n");
        return 1;
    }
    if ((f_write = fopen("myLab1InspiredCode/output.txt", "w")) == NULL) {
        printf("Error in opening the output file\n");
        return 2;
    }
    printf("Choose mode: U - Convert to uppercase and save to file\n"
        "L - Convert to lowercase and save to file\n"
        "C - Print original content on screen\n"
        "Enter your choice: ");

    user_choice = toupper(getchar());
    printf("%c \n\n", user_choice);


    if (user_choice == 'U') {
        writeToTheFile(f_read, f_write, line, user_choice);
    } else if (user_choice == 'L') {
        writeToTheFile(f_read, f_write, line, user_choice);
    } else if (user_choice == 'C') {
        while (!feof(f_read)) {
            fgets(line, sizeof(line), f_read);
            printf("%s", line);
        }
    } else {
        printf("Wrong choice\n");
    }


    return 0;
}
