#include <stdio.h>
void main() {
  int sayi, eb, ek;
  FILE *dd;
  dd = fopen("sayilar.txt", "r+");

  if (dd == NULL) {
    printf("aaaaaaa");
    printf("kapıyom amk");
    return;
  }

  fscanf(dd, "%d", &sayi);
  eb = sayi;
  ek = sayi;

  while (fscanf(dd, "%d", &sayi)!=EOF){
	  if (sayi > eb) {
            eb = sayi;
        }
        if (sayi < ek) {
            ek = sayi;
        }
    }
      printf("En buyuk sayi: %d\n", eb);
    printf("En kucuk sayi: %d\n", ek);
    
    fclose(dd);
  }
