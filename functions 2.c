//
// Created by Erimsah Olut on 27.03.2025.
//
#include <stdio.h>
#include  <math.h>
#include <string.h>

double cubeVolume(double v){
    return pow(v,3);
}
void reverse(char str[]);
int main() {

    double volume = 5.0;
    char myString[30];

    printf("volume in m^3 = %f \n",cubeVolume(volume));
    printf("Please enter a string: ");
    scanf("%s",myString);
    printf("myString = %s my reversed string: ",myString);
    reverse(myString);


    return 0;
}

void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        const char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("%s\n", str);
}