#include <stdio.h>
#include <stdlib.h>
#include <string.h> // yeni kütüphanemiz

int main() {

    char leziz[] = "Patates";
    char zeziz[] = "Domates";
    
    printf("Patates kelimesi %d harf uzunluğunda.\n",strlen(leziz));
    //strlen() stringin uzunluğunu söylüyor 
    printf("Patates kelimesi %d byte boyutunda.\n",sizeof(leziz));
    // 8 byte çünkü sonunda \0 da var 
    
    printf("%d\n",strcmp(leziz,zeziz));
    // bu hangisinin asci olarak daha çok yer kapladığını söylüyor 
        // bana aşırı gereksiz geldi (lez > zez) gibi bişi üstteki
    
    printf("%d\n",strncmp(leziz,zeziz,4));
    // bu da belirli bi harfe kadar karşılaşırtıyor mesela ilk 4

    strcpy(zeziz,leziz);
    printf("%s\n",zeziz);
    //bu bir stringi diğerine kopyalamak için (kime,kim) şeklinde 
      //zeziz[0] = leziz[0] 1,2,3,4,5 diye uğramaktan iyi :D
    
    char yeliz[] = "Ananas";
    strncpy(yeliz,leziz,3);
    printf("%s\n",yeliz);
    //bu da belirli bi yere kadar kopyalamk için

  return 0;
}
