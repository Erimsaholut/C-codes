#include <stdio.h>

int main(){

    FILE *fp;
    int x;

    fp = fopen("metin.txt","r");
    if (fp == NULL){
        printf("File not found");
        return 1;
    }
    
    while (fscanf(fp,"%d",&x)!=EOF)
    {
        printf("%d\n",x);
    }
    fclose(fp);
    

    return 0;
}