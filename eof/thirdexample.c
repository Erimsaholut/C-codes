#include <stdio.h>

int main(){

    FILE *fp;
    char line[100];

    fp = fopen("metin2.txt","r");

    if (fp == NULL){
        printf("File not found");
        return 1;
    }
    
    while (fgets(line,sizeof(line),fp)!=NULL)
    {
        printf("%s",line);
    }
    fclose(fp);
    

    return 0;
}