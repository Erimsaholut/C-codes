//
// Created by Erimsah Olut on 4.04.2025.
//

#include <stdio.h>

int harmonic();
void digit();

int main() {
    //harmonic();
    digit();


    return 0;
}


int harmonic() {
    int number;
    float sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        sum += (float) 1 / i;
    }

    printf("The sum of the serie is %.2f\n", sum);
    return sum;
}

void digit() {
    int number = 12345;
    int digit = 0;

    while (number != 0) {
        number /= 10;
        digit++;
        printf("%d\n", number);
    }
printf("%d\n", digit);
}


