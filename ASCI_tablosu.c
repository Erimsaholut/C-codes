#include <stdio.h>
#include <stdlib.h>

int main() {
  /* Her sembol ve harfin bilgisayarda bir asci kodu var ve bunları yazdırmak
   * için şöyle yapıyoruz (internetten de bakılabiliyor)*/
  printf("%d\t %d\t %d\n\n", 'a', 'b', 'c'); // \t boşluk bırakıyor
  printf("%c\t %c\t %c\n", '97', '98', '99');

  int i;

  for (i = 97; i <= 122; i++) {
    printf("\n%c = %d\t", i,i);
  }

  return 0;
}