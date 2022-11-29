#include <stdio.h>
#include <stdlib.h>
void tek_cift(int sayı){
    if (sayı%2==0){
    printf("Sayımız çift sayıdır.\n");
        }
    else{
        printf("Sayımız tek sayıdır.\n");
        }
    }
        // geriye değer döndürmeyen fonksiyonlara void yazılıyor
        // içindeki data typeı da tanımlamamız gerekiyor

int buyuk_mu(int sayı){
    
    if (sayı >= 30){
        return 1 ;
        }
    else{
        return 0 ;
        }
    }
        //değer geri dönecekse dönecek olan değerin tipinde tanımlamamız gerekiyor fonksiyonu


int main()
 {
    int sayı,sonuc;
    printf("Lütfe bir sayı giriniz:  ");
    scanf("%d",&sayı);

    tek_cift(sayı);
    sonuc = buyuk_mu(sayı);
    if (sonuc == 1) {
        printf("ve 30 dan büyüktür. \n");
    }
    else{
        printf("ve 30 dan küçüktür. \n");
    }
    
    return 0;
}
