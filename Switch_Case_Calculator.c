#include <stdio.h>
#include <stdlib.h>

int main(){   
    float bir,iki;
    char islem;
    printf("Birinci sayı gir:  ");
    scanf("%f",&bir);
    
    printf("Bir işlem gir(+,-,*,/):  ");
    scanf(" %c",&islem);
    printf("İkinci sayı gir:  ");
    scanf("%f",&iki);


    switch(islem){
    case'+':printf("%.2f %c %.2f = %.2f",bir,islem,iki,bir+iki);
    break;
    case'-':printf("%.2f %c %.2f = %.2f",bir,islem,iki,bir-iki);
    break;
    case'*':printf("%.2f %c %.2f = %.2f",bir,islem,iki,bir*iki);
    break;
    case'/':printf("%.2f %c %.2f = %.2f",bir,islem,iki,bir/iki);
    break;
    default:printf("\nAdam gibi gir yoksa ben ananın amına girerim ");
        
    }

    


    
    return 0;
}