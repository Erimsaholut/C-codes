#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamsayi;
    printf("Lütfen bir tam sayi giriniz: ");
    scanf("%d",&tamsayi);    //   & şu işaret kullanıcadan çekerken
    printf("Bizim sayı %d aga",tamsayi);

    float ondalıklısayı;
    printf("\nYalvarırım ondalıklı sayı gir: ");
    scanf("%f",&ondalıklısayı);
    printf("Ondalıklı sayı dedin mi %.2f aga",ondalıklısayı);

    double yol;
    printf("\nYol yaptı köprü yaptı: ");
    scanf("%lf",&yol);
    printf("cevabımız %.3lf dir",yol);
    
    char karakterim;
    printf("\nSüpermanın ortasındaki harf:");
    scanf("%c",&karakterim);
    printf("tabii ki %c var",karakterim);
    
    

  return 0;
}