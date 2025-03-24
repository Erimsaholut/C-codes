#include <stdio.h>

int main(){
    char myChar;
    FILE *fp;
    fp = fopen("testFile.txt","w");

    printf("Bir karakter girin: ");
    myChar = getchar();

    printf("%c yazdiriliyor",myChar);

    if(fp!=NULL){
        fprintf(fp, "%c", myChar);
    }

    fclose(fp);

    return 0;
}