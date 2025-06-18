//
// Created by Erimsah Olut on 17.06.2025.
//

#include <stdio.h>

void maxOdd(int v[], int N) {
    int i = 0;

    while (i < N) {
        if ((v[i]%2)==1) {
            printf("%d ",v[i]);
        }else {
            printf("\n");
        }
        i++;
    }


}

int main() {
    int vector[] = {1, 3, 7, 1,5,5,31, 0, 1, 9, 3, 1, 0};
    int vectorSize = sizeof(vector) / sizeof(vector[0]);
    maxOdd(vector, vectorSize);

    return 0;
}
