#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int topla(int x, int y);

int main(void) {
  // Karşılaştırma Operatörü
  int x = 3, y = 5;
  int z = (x > y) ? 10 : 0;
  (x > y) ? printf("Kılıçdar\n") : printf("Maarem\n");
  printf("%d\n  ", z);

  // Listeler
  int ogrNumara[5] = {123, 456, 789, 101, 213};
  printf("%d\n", ogrNumara[1]);
  // fonksiyonlar
  // direkt üste yazabilirsin ya da üstte tanımlayıp altta yazabilirsin
  printf("%d\n", topla(x, y));

  struct deneme {
    char cdizi1[30]; // adı
    char cdizi2[30]; // soyadı
    char cdizi3[40]; // memleketi
    char cdizi4[40]; // Tahsili
    int yas;         // Yaşı
  } abc;
  abc.yas = 31;
  // scanf("%d", &abc.yas);
  // printf("%d",abc.yas);
  // fgets(abc.cdizi1, 20, stdin); // bu stdin pointermış şimdilik ezberle
  // sadece printf("%s", abc.cdizi1);

  struct Ogretmen {
    int No;
    char Ad[50];
    char Soyad[50];
    int Cinsiyet;
    int FakulteBolum;
    float GenelOrtalama;
  };

  struct Ogretmen ugretmenim;
  // printf ("Ügretmen Ad:");
  // scanf ("%s",ugretmenim.Ad);

  typedef struct {
    int No;
    char Ad[50];
    char Soyad[50];
    int Cinsiyet;
  } Ogrenci;

  Ogrenci ogr; // yandan yemiş classlar
  ogr.No = 365;
  strcpy(ogr.Ad, "Erimsah");
  strcpy(ogr.Soyad, "Olut");

  struct {
    char cdizi[10];
    int id;
    char cd;
  } yd1, yd2, yd3;

  yd1.id = 31;
  yd3.id = 43;

  return 0;
}
int topla(int x, int y) { return x + y; }
