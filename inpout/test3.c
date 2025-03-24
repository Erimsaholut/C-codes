#include <stdio.h>

int main(){
    char a,b,c,d;
    FILE *fp;
    fp = fopen("testFile.txt","r");

    if (fp == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }
    
    a = getc(fp);
    b = fgetc(fp);
    printf("Bir karakter girin (getc(stdin))\n");
    c = getc(stdin);
    d = getchar();


    printf("char 1 = %c char 2 = %c",a,b);
    printf("char 3 = %c char 4 = %c",c,d);

    fclose(fp);

    return 0;
}