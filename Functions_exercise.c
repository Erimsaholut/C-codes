#include <stdio.h>
#include <stdlib.h>
void hesapla_keke(float say1,float say2){

    printf(" %.2f\n ",say1+say2);
    printf("%.2f\n ",say1-say2);
    printf("%.2f\n ",say1/say2);
    printf("%.2f\n ",say1*say2);
}


int main()
{
    float bir,iki;
    printf("İki tane sayı giriniz: \n");
    scanf("%f %f",&bir,&iki);

    printf(" %.2f\n ",bir+iki);
    printf("%.2f\n ",bir-iki);
    printf("%.2f\n ",bir/iki);
    printf("%.2f\n ",bir*iki);
    printf("##### Fonksiyon işlem #####\n");
    hesapla_keke(bir,iki);

    
   
    return 0;
}