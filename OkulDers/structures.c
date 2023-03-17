#include <stdio.h>
struct deneme {
  int yas;
  char ad;
} mn;

struct deneme fonk(void) {
  struct deneme mn;
  mn.yas = 21;
  mn.ad = 'A';
  return mn;
}


int main(void) {
  mn = fonk();
  printf("yas:%d \n ad:%c\n", mn.yas, mn.ad);
  return 0;
}


