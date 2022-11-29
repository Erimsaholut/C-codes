#include <stdio.h>
#include <stdlib.h>

int main(){   
    int bir,iki;
    printf("İki sayı alayım: \n");
    scanf("%d%d",&bir,&iki);

    if (bir > iki){
        printf("%d büyüktür %d den.😎\n",bir,iki);
        if (bir-iki>20){
            printf("%d ve %d arasında 20den fazla fark var. 🤪\n",bir,iki);
        }
        else{
          printf("%d ve %d arasında 20den az fark var. 😲\n",bir,iki);   
        }
    }
    else if (iki > bir){
        printf("%d büyüktür %d den . 😎\n",iki,bir);
        if (iki-bir>20){
            printf("%d ve %d arasında 20den fazla fark var.🤪\n",bir,iki);
        }
        else{
          printf("%d ve %d arasında 20den az fark var.😲\n",bir,iki);   
        }





        
    }
    else{
        printf("Bu sayılar eşittir");
    }
     
    return 0;
}