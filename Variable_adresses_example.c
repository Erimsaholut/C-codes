#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ussu(int *bir,int *iki,int *yarrak){
    //*yarrak = pow(*bir , *iki )  ;
    *yarrak = 1 ;
    for (int i=0; i<*iki; i++){
        *yarrak = *yarrak * *bir ;
    }
}

int main()
{
    int bir,iki,sonuc;
    printf("üssünü alıcıya hoşgeldiniz :) \n");
    printf("taban sayısını gir acilllll\n");
    scanf("%d",&bir);
    printf("üssü sayıyı gir acilllll\n");
    scanf("%d",&iki);
    
    
    ussu(&bir,&iki,&sonuc);

    printf("%d", sonuc);
    
    


    
    return 0;
}