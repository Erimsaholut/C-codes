#include <stdio.h>


int ussual(int a,int b){
    int toplam=a ,i;
    
    for(i=0;i<b-1;i++){
        toplam *= 2;
    }
    
    return toplam ;
}



int main() {
    int a,b;
    printf("Taban sayıyı giriniz: \n");
    scanf("%d",&a);
    printf("üssünü giriniz: \n");
    scanf("%d",&b);
    printf("%d üssü %d sayısı = %d",a,b,ussual(a,b));

    
    
  return 0;
}