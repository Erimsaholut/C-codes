#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 5 ;
    int sonuc = x+y;
    printf("Sayılarımız %d ve %d \n",x,y);
    printf("Toplama = %d\n",x+y);
    printf("Diğer toplama yöntemi = %d\n",sonuc);
    
    printf("Çıkarma = %d\n",x-y);
    printf("Çarpma = %d\n",x*y);
    printf("Bölme = %d\n",x/y);
    printf("Bölününce kalan = %d\n",x%y);
    printf("ilk sayıyı arttır = %d\n",++x);//bunlar temelli değiştiriyor 
    printf("Yeni ilk sayı = %d\n",x);
    printf("İlk sayıyı azalt = %d\n",--x);
    
    
    
    
    return 0;
}

