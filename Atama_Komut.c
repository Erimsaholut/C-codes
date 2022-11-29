#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayı = 25;
    printf("%d\n",sayı);
    sayı = sayı + 3;       // bu 
    printf("%d\n",sayı);           // aynı şey
    sayı += 3;              //ve bu             bu daha kolayı 
    printf("%d\n",sayı);
     /*    
    Aynı şekilde =  += -= *= /= %= kullanılabiliyor denemeye gerek yok teker teker
    */

    
    return 0;
}

