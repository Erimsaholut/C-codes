#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //                     ##İLK EGZERSİZ
    
    char bon[100] = "Bonne";
    char suar[100] = "Soiree";
    char bosh[100];
    //hedef bonsoire yazdırmak   // benim çözüm 
    strncat(bosh,bon,3);
    strncat(bosh,suar,5);
    printf("%s\n",bosh);
    // Farklı bir alternatif     // Hocanın çözümü //aynı anda açma 
    strcpy(bosh, bon);
    strncpy(bosh+3,suar,5); //bosh +3 3 den sonrasına yapıştır demek 
    printf("%s\n",bosh);
    //                    ## İKİNCİ EGZERSİZ    

    // bu iki boyutlu karakter dizisi
    char c_dizi[100][100]={"bir","iki","üc","dört","bes"};
    // c_dizi {'b','i','r','\0'},{'i','k','i','\0'}
        // bununla aynı şey olduğu için 2 boyutlu 
    printf("dizinin 4. elemanı %s", c_dizi[3]);
    printf(" 4. elemanın 3. harfi %c", c_dizi[3][2]);
    

     
    return 0;
}