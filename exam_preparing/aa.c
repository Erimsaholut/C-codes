//
// Created by Erimsah Olut on 22.06.2025.
//
#include <stdio.h>

typedef enum { red, yellow, green } trafficLight;

typedef struct {
    char name[64];
    trafficLight *p3;
} road;

int main() {
    trafficLight r[] = {red, green};
    trafficLight* pl[3];
    trafficLight *p = r;
    trafficLight **p2 = &p;
    trafficLight *p1 = r;
    road a = {"Corso Stati Uniti", NULL};

    printf("sizeof(yellow): %zu\n", sizeof(yellow)); // 4
    printf("sizeof(trafficLight): %zu\n", sizeof(trafficLight)); // 4
    printf("sizeof(r): %zu\n", sizeof(r)); // 12
    printf("sizeof(pl): %zu\n", sizeof(pl)); // 24
    printf("sizeof(p1): %zu\n", sizeof(p1)); // 8
    printf("sizeof(p): %zu\n", sizeof(p)); // 8
    printf("sizeof(p2): %zu\n", sizeof(p2)); // 8
    printf("sizeof(road): %zu\n", sizeof(road)); // 72 (or possibly 80 with padding)
    printf("sizeof(a.name): %zu\n", sizeof(a.name)); // 64
    printf("sizeof(*(a.name)): %zu\n", sizeof(*(a.name))); // 1
    printf("sizeof(a.p3): %zu\n", sizeof(a.p3)); // 8

    return 0;
}
