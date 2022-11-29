#include <stdio.h>
#include <stdlib.h>
int main(void) {
//sizeof() komutu değişkenin ne kadar yer kapladığını gösterir 
    int sayi = 321;
    printf("Sayi degiskenim %d byte yer tutar.\n",sizeof(sayi));
    printf("İnt degiskenim %d byte yer tutar\n",sizeof(int));
    printf("Double degiskenim %d byte yer tutar\n",sizeof(double));
    printf("Char degiskenim %d byte yer tutar\n",sizeof(char));
    //7,8 ve 9. satirlarda sizeoflarin içinde int olmasa bile sayı döndürdüğü için %d koyduk
    


    
  return 0;
}