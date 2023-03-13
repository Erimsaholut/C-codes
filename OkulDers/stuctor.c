#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char Plaka[50];
  char Model[50];
  char Renk[50];
} AracOzellik;

typedef struct {
  AracOzellik Ozellikler;
  char GirisSaati[12];
} Arac;

typedef struct {
  Arac Araclar[1000];
  int AracSayisi;
} Otopark;

Otopark BaharOtoPark = {0};

void AracEkle();
void AraclariListele();

int main() {
  AracEkle();
  AracEkle();
  AraclariListele();
  return 0;
}

void AracEkle() {
  Arac arc;
  printf("\nArac bilgilerini giriniz...\n");
  printf("Plaka: ");
  gets(arc.Ozellikler.Plaka);
  printf("Model: ");
  gets(arc.Ozellikler.Model);
  printf("Renk: ");
  gets(arc.Ozellikler.Renk);
  printf("Giris saati: ");
  gets(arc.GirisSaati);
  BaharOtoPark.Araclar[BaharOtoPark.AracSayisi] = arc;
  BaharOtoPark.AracSayisi++;
}

void AraclariListele() {
  int i;
  printf("\n**********Otoparktaki Araclar**********\n");
  for (i = 0; i < BaharOtoPark.AracSayisi; i++) {
    printf("%d. arac plaka: %s\n", i, BaharOtoPark.Araclar[i].Ozellikler.Plaka);
  }
}
