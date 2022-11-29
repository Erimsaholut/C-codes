#include <stdio.h>
#include <stdlib.h>

int main(){   
    int bir,iki;
    printf("İki sayı alayım: \n");
    scanf("%d%d",&bir,&iki);

    if (bir > iki){
        printf("%d büyüktür %d den . 😎",bir,iki);
    }
    else if (iki > bir){
        printf("%d büyüktür %d den . 😎",iki,bir);
    }
    else{
        printf("Bu sayılar eşittir");
    }
     
    return 0;
}