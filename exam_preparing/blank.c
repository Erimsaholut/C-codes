//
// Created by Erimsah Olut on 17.06.2025.
//
#include <stdio.h>
#include <string.h>

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
    printf("%s \n", strcat(myName,mySurname));

    struct Car c1 = {"Toyota", 2020};
    struct Car c2;
    c2 = c1;
    c2.year = 2021;
    printf("%s %d", c1.brand, c1.year);





    return 0;
}

