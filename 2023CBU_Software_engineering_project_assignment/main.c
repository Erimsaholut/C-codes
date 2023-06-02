#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sezar_sifrele(char* metin, int kaydirma) {
    int i = 0;
    while (metin[i] != '\0') {
        int metin_harf = metin[i];
        int yeni_metin_harf = (metin_harf + kaydirma) % 256;
        metin[i] = yeni_metin_harf;
        i++;
    }
}

void sezar_sifre_coz(char* metin, int kaydirma) {
    int i = 0;
    while (metin[i] != '\0') {
        int metin_harf = metin[i];
        int yeni_metin_harf = (metin_harf - kaydirma) % 256;
        if (yeni_metin_harf < 0) {
            yeni_metin_harf += 256;
        }
        metin[i] = yeni_metin_harf;
        i++;
    }
}

int en_buyuk_asal_carpan(int numara) {
    int i;
    int en_buyuk_asal = 2;
    
    for (i = 2; i <= numara; i++) {
        while (numara % i == 0) {
            if (i > en_buyuk_asal) {
                en_buyuk_asal = i;
            }
             numara /= i;
        }
    }
    
    return en_buyuk_asal;
}

int main() {
    char metin[100];
    int ogrenciNumarasi;
    int kaydirma;
    int girilen_sifre;
    
    printf("Metni girin: ");
    fgets(metin, sizeof(metin), stdin);
    
    printf("Öğrenci numaranızı girin: ");
    scanf("%d", &ogrenciNumarasi);
    
    int sonRakam = ogrenciNumarasi % 10;
    
    if (sonRakam == 0) {
        int MyNumara = ogrenciNumarasi;
        while (MyNumara % 10 == 0) {
            MyNumara /= 10;
        }
        kaydirma = MyNumara % 10;
    } else {
        kaydirma = sonRakam;
    }
    
    metin[strcspn(metin, "\n")] = '\0';
    sezar_sifrele(metin, kaydirma);
    
    printf("Şifreli metin: %s\n", metin);
    
    // Şifrenin çözülmesi için kullanıcıdan şifre istenir
    do {
        printf("Öğrenci numaranızın en büyük asal çarpanı nedir? ");
        scanf("%d", &girilen_sifre);
        
        if (girilen_sifre != en_buyuk_asal_carpan(ogrenciNumarasi)) {
            printf("Hatalı bir şifre girdiniz!\n");
        }
    } while (girilen_sifre != en_buyuk_asal_carpan(ogrenciNumarasi));
    
    sezar_sifre_coz(metin, kaydirma);
    
    printf("Çözülmüş metin: %s\n", metin);
    
    return 0;
}
