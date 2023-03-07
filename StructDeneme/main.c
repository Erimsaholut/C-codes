#include <stdio.h>
struct deneme {
  int yas;
  char cinsiyet;
  char ad;
} mn; // Burada Struct oluşturduk.

struct deneme fonk(void); // Burada Fonksiyon öntanımlamasını yaptık

int main(void) {
  mn = fonk(); // fonksiyonla structu eşitledik
  printf("yas:%d \n cinsiyet=%c \n ad:%c\n", mn.yas, mn.cinsiyet, mn.ad);
}

struct deneme fonk() { //ön tanımlama yaptığımız fonskiyonu yazdık
  struct deneme mn;    // fonksiyonu üst tarafa yazmamamızın
  mn.yas = 59;         // sebebi mal olmamız
  mn.cinsiyet = 'k';
  mn.ad = 'Y';
  return mn;
}