//
// Created by Erimsah Olut on 17.06.2025.
//
#include <stdio.h>
#include <string.h>
#include <wctype.h>

struct Car {
    char brand[10];
    int year;
};

int main() {
    printf("Hello World\n");
    const int n = 32;
    printf("n = %d \n", n);
    double myDoubleNum = 19.99;
    printf("%.0lf\n", myDoubleNum);

    double x = 5.9;
    printf("%.0lf\n", x);

    x = 5.499;
    printf("%.0lf\n", x);

    printf("%zu\n", sizeof(x));
    x = (5 > 3) ? 31 : 2;
    printf("%lf\n", x);
    (x > 33.0) ? printf("biggerThan") : printf("smallerThan");

    char myName[100] = "Erim";
    char mySurname[] = "Olut";
    printf("\n%zu \n", strlen(myName));
    printf("%s \n", strcat(myName, mySurname));

    struct Car c1 = {"Toyota", 2020};
    struct Car c2 = c1;
    c2.year = 2021;
    printf("%s %d \n", c1.brand, c1.year);

    int myInt = 10;
    int *ptr = &myInt;

    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%zu\n", sizeof(ptr));
    printf("%d\n", sizeof(*ptr));

    if (13 > 10) {
        printf("naber");
    } else;
    printf("selam\n");

    printf("%zu\n", strlen("10/02/2021"));

    double xy = 1.0 / 2.0 + 3 + 2 / 4;
    printf("%.2f", xy);;

    FILE *fptr = fopen("scores.txt", "r");
    char score[25];
    while (fgets(score, sizeof(score), fptr) != NULL) {
        int point = -1;
        sscanf(score, "%*s %d", &point);
        printf("first score = %d\n", point);
    }

    return 0;
}
