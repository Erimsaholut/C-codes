#include <stdio.h>
#include <stdlib.h>

void maks_min(int dizi[], int a) {
  int localmaks, maks, localmin, min, i;
  maks = dizi[0];
  min = dizi[0];
  for (i = 0; i <= a; i++){
      
    if (dizi[i] > maks) {
      maks = dizi[i];
    }
      
    if (dizi[i] < min) {
      min = dizi[i];
    }
      
  }
  printf("\nEn büyük %d", maks);
  printf("\nEn küçük %d", min);
}

int main() {
  int a, i;

  printf("Kaç adet rastgele sayı oluşturalım.\n");
  scanf("%d", &a);
  int dizi[a];
  srand(time(0));
  printf("dizinin elemanları:\n");

  for (i = 0; i <= a; i++) {
    dizi[i] = rand() % 100;
    printf("%d  ", dizi[i]);
  }

  maks_min(dizi, a);

  return 0;
}
