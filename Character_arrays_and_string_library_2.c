#include <stdio.h>
#include <stdlib.h>
#include <string.h> // yeni kütüphanemiz

int main() {

    char bir[100] = "Yazılım";
    char iki[100] = "Mühendisliği";
    char uc[100] = ".com.patates";
    char bos[100];

    strcat(bir," ");
    strcat(bir,iki);
    printf("%s\n",bir);
    // strcat stringleri birbirine ve ya bir yazıya yapıştımayı sağlıyor

    strncat(bir,uc,4);
    printf("%s\n",bir);
    //strncat belirli bir yeri kopyalamak için

    printf("Lütfen biz isim yaz.\n");   
    gets(bos);
    printf("%s\n",bos);
    //scanf yerine kullanılabiliyor ama oteriteler bunun tehlikeli olduğunu söylüyormuş bunun yerine fgets kullanın diyola
    //lan yanda warning: the `gets' function is dangerous and 
        //should not be used. yazdı

    printf("Lütfen baska biz isim yaz.\n");   
    fgets(bos,sizeof(bos),stdin);
    printf("%s",bos);
    //fgets(Karakter dizisinin ismi , maks karakter , pointer muhabbeti)
    // biz dosya okutmadan düz değer atayacaksak stdin yazıyoruz 
    // maks karakter sizeof(bos) çünkü sizeof() 100 degerini veriyor

  return 0;
}
