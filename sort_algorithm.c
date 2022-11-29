#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sirala(int dizi[], int n) {
  int kutu, maks = n;
  for (int j = 0; maks - 1 > j; maks--) {
    for (int i = 0; maks > i; i++) {
      if (dizi[i] > dizi[i + 1]) {
        kutu = dizi[i];
        dizi[i] = dizi[i + 1];
        dizi[i + 1] = kutu;
      }
    }
  }

  for (int i = 0; n > i; i++) {
    printf("%d\t", dizi[i]);
  }
}

int main() {
  int n;
  printf("Kaç adet sayi üretilsin\n");
  scanf("%d", &n);
  int dizi[n];
  srand(time(0));
  for (int i = 0; n > i; i++) {
    dizi[i] = rand() % 100;
    printf("%d\t", dizi[i]);
  }
  printf("\n");
  sirala(dizi, n);
}
