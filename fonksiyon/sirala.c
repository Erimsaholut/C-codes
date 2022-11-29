#include <stdio.h>
#include <stdlib.h>

void sirala(int dizi[], int a) {
  int i, bos, k;

  for (k = 0; a > k; k++) {

    for (i = 0; a - k > i; i++) {

      if (dizi[i] > dizi[i + 1]) {
        bos = dizi[i];
        dizi[i] = dizi[i + 1];
        dizi[i + 1] = bos;
      }
    }
  }

  for (i = 0; a > i; i++) {
    printf("\n%d ", dizi[i]);
  }
}

int main() {
  int a, i;

  printf("Kaç adet rastgele sayı oluşturalım.\n");
  scanf("%d", &a);

  int dizi[a];
  srand(time(0));
  printf("dizinin elemanları:\n");

  for (i = 0; i < a; i++) {
    dizi[i] = rand() % 100;
    printf("%d  ", dizi[i]);
  }

  sirala(dizi, a);

  return 0;
}
