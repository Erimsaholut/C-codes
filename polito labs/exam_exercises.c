//
// Created by Erimsah Olut on 20.06.2025.
//

#include <stdio.h>

int main() {
    typedef enum { green, yellow, red } trafficLight;

    struct road {
        char name[32]; // 32 bytes
        trafficLight *s; // pointer → 8 bytes (64-bit system)
        struct road *r; // pointer → 8 bytes (64-bit system)
    };

    struct road l[100], *p[100];
    trafficLight tl, s1[] = {red, green, green, green, yellow};
    return 0;
}
