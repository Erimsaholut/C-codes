#include <stdio.h>

int main(){

    FILE *fp;
    char x;

    fp = fopen("metin.txt","r");
    if (fp == NULL){
        printf("File not found");
        return 1;
    }
    
    while ((x = fgetc(fp))!=EOF)
    {
        printf("%c",x);
    }
    fclose(fp);
    

    return 0;
}