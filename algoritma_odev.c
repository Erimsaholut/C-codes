#include <stdio.h>

int main(void) {
  int sayac = 0, ciftsay = 0, lsay, ttop = 0, ebc;
  printf("Programa hosgeldiniz. Sayi girisini durdurmak ve sonuclari gormek "
         "icin 0 giriniz.\n");

  while (lsay != 0) {
    printf("Sayi giriniz:\n");
    scanf("%d", &lsay);
    sayac += 1;

    if (lsay % 2 == 1) {
      ttop += lsay;
    }

    else if (lsay % 2 == 0 && ciftsay == 0) {
      ebc = lsay;
      ciftsay += 1;
    }

    else if (lsay % 2 == 0) {
      ciftsay += 1;

      if (lsay > ebc) {
        ebc = lsay;
      }
    }
  }

  printf("Girilen toplam sayi: %d\nCift sayi sayisi %d\nTek sayilarin toplami: "
         "%d\nEn büyük cift sayi: %d",
         sayac - 1, ciftsay - 1, ttop, ebc);

  return 0;
}