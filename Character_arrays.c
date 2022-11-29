#include <stdio.h>
#include <stdlib.h>

int main() {
    //karakter dizisi tanımlama ve kullanma 

    char Memleket[] = {'M','a','n','i','s','a','\0'};
    // karakter karakter tanımlarsan sonuna \0 koyman gerekiyor
        // \0 karakterlerin bittiği anlamına gelir 
            // [] dizi anlamına geliyor 
    
    char okul[] = "Manisa";
    // böyle yaparsan da hafızada yukarıdaki gibi tutulur 
        //ve \0 sıfırı kendi koyar

    okul[0] = 'K';
    
        printf("%s\n",Memleket);
    printf("%s\n",okul);

    char data[180]; // boşta tanımlamak istersek içine maksimum karakter sayısını da girmemiz gerekiyor    
    printf("Lütfen bana bir şey söyle seni çok özledim\n");
    scanf("%s",&data);
    printf("demek %s\n",data);

    
  return 0;
}
