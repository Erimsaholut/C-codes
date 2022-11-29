#include <stdlib.h>
#include <stdio.h>

int main(){
    int ilksay,ikincisay;
    char isim;
    printf("Doğum yılınızı giriniz: ");
    scanf("%d",&ilksay);
    printf("Yaşınızı giriniz: ");
    scanf("%d",&ikincisay);
    printf("İsminizin baş harfini giriniz: "); 
    scanf(" %c",&isim);                        //Burada %c den önce 1 tane boşluk bırakıyoruz boş kalan hazıyaı temizlemesi için falan filan 
    printf(" İsim %c****,yaş %d,doğum tarihi %d. ",isim,ikincisay,ilksay);





    
}