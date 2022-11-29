#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Math komutları için gerekli kütüphane


int main(){   
    // Komutlarımız: ceil(tavan) floor(yer) sqrt(kare) pow abs|MutlakDeğer|

    printf("%f\n",ceil(4.2)); //ceil bir sonraki tam sayıya yuvarlıyor
    printf("%f\n",floor(5.8)); //floor bir önceki tam sayıya yuvarlıyor 
    printf("%f\n",sqrt(81)); //sqrt karekökünü alıyor 
    printf("%f\n",pow(2,5)); //pow karesini alıyor pow(taban,üssü) 
    printf("%d\n",abs(-29.5)); //sqrt karesini alıyor 
//abs komutunda %f ya da %lf ile değer alırsan 0 oluyor diğerlerinde %d ile sorun çıkarıyor (buçuklu değerin mutlağı alınmıyor - ile çarp onu da artık
    

    
    return 0;
}