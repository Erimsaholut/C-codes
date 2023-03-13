#include <stdio.h>
void hanoiKuleleri(char kaynak, char temp, char hedef, int n) {
  if (n == 0)
    return;
    
  hanoiKuleleri(kaynak, hedef, temp, n - 1);
  printf("\n%d disk (%c -> %c) ", n, kaynak, hedef);
  hanoiKuleleri(temp, kaynak, hedef, n - 1);
}

int main(void) {
  int n;
  printf("\nNumber of Disks \n: ");
  scanf("%d", &n);
  hanoiKuleleri('a', 'b', 'c', n);
  printf("\n");
  return 0;
}
