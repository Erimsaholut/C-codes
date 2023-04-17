#include <ctype.h>
#include <stdio.h>

void nextStep();
int usAlma(int taban, int us);
enum dersler {
  fizik,
  mat,
  alg,
  yazılım = 10,
  tarih,
};

int *MinSayiBul(int a[], int boyut) {
  int i;
  int ek, *pek;
  ek = a[0];
  for (i = 1; i < boyut; i++) {
    if ((*(a + i)) < ek) {
      ek = *(a + i);
      pek = (a + i);
    }
  }
  return pek;
}

int main() {

  int pilaka = (5 > 3) ? (35) : (45);

  for (int i = 1; 46 > i; i += 4) {
    pilaka = i;
    switch (pilaka) {
    case 45:
      printf("Manisa");
      break;
    case 4:
      printf("Ankara");
      break;
    case 1:
      printf("Adana");
      break;
    case 37:
      printf("İzmir");
      break;
    case 41:
      printf("Kütahya");
      break;
    default:
      printf("İstanbul Olabilir");
    }
  }
  nextStep();
  while (pilaka > 1) {
    pilaka -= 3;
    printf("%d\n", pilaka);
  }

  nextStep();

  do {
    pilaka += 1;
    if ((pilaka % 10) * 11 == pilaka)
      continue;

    printf("plaka = %d\n", pilaka);

    if (pilaka == 23)
      break;

  } while (pilaka <= 23);
  nextStep();
  printf("3^4 = %d", usAlma(3, 4));

  nextStep();

  enum menu {
    iskender, // 0
    kebab,    // 1
    köfte,
    ekmek_arası_ekmek, // 3
  };
  printf("kebab: %d\n", kebab);
  printf("Ekmek arası ekmek: %d\n", ekmek_arası_ekmek);

  enum dersler derslerim;
  derslerim = alg;

  printf("alg dersi = %d\n", derslerim);
  derslerim = yazılım;
  printf("yazılım dersi = %d\n", derslerim);
  derslerim = tarih;
  printf("tarih dersi = %d\n", derslerim);

  nextStep();

  enum boolean { false = 0, true = 1 };
  typedef enum boolean bool;

  bool isTrue;

  isTrue = true;

  if (isTrue == true)
    printf("True\n");

  nextStep();

  struct ilkStruct {
    int a;
    char b;
    float c;
  } ilkStructlarim;

  struct ikinciStruct {
    int k;
    char l;
    float m;
  };

  struct {
    int x;
    char y;
    float z;
  } ucuncuStructum;

  struct ilkStruct ilkDeneme;
  ilkStructlarim.b = 'b';
  ilkDeneme.a = 23;
  printf("ilkStruct deneme  = %d\n", ilkDeneme.a);
  printf("ilkStructlarım = %c\n", ilkStructlarim.b);

  nextStep();

  struct ikinciStruct ikinciler[100];
  ikinciler[0].k = 5;
  ikinciler[1].k = 55;
  printf("ikinciler[0] = %d\n", ikinciler[0].k);
  printf("ikinciler[1] = %d\n", ikinciler[1].k);

  nextStep();

  struct yap2 {
    char cdizi[30]; // Manisa Celal Bayar Universitesi
  };

  struct yap1 {
    char cdizi1[15]; // algoritma ve
    char cdizi2[15]; // programlama
    int id;          // 35
    struct yap2 yd2;
  } yd1;

  strcpy(yd1.cdizi1, "Algoritma ve ");
  strcpy(yd1.cdizi2, "Programlama II");
  yd1.id = 35;
  strcpy(yd1.yd2.cdizi, "Manisa Celal Bayar Universitesi");
  printf("%s %s %d\n", yd1.cdizi1, yd1.cdizi2, yd1.id);
  printf("%s", yd1.yd2.cdizi);

  nextStep();

  union bir {
    int id;
    double dd;
    char cd;
  } bizimHocaMalAmk;

  bizimHocaMalAmk.id = 21;
  bizimHocaMalAmk.cd = 'A';
  printf("%d %c\n", bizimHocaMalAmk.id, bizimHocaMalAmk.cd);
  bizimHocaMalAmk.id = 127;
  printf("%d %c\n", bizimHocaMalAmk.id, bizimHocaMalAmk.cd);
  bizimHocaMalAmk.dd = 34.75;
  printf("%d %f", bizimHocaMalAmk.id, bizimHocaMalAmk.dd);

  nextStep();

  int a, *b;
  a = 5;
  b = &a;
  printf("a değişkeninin değeri = %d\n", a);
  printf("a değişkeninin yeri = %p\n", &a);

  printf("a değişkeninin değeri = %d\n", *b);
  printf("a değişkeninin yeri = %p\n", b);

  nextStep();

  int *bos = NULL;
  printf("p işaretçisinin değeri = %p\n", bos);

  nextStep();

  int val = 1903;
  int *p = &val;
  int **pp = &p;

  printf("val = %d\n", val);
  printf("tp = %d\n", *p);
  printf("**pp = %d\n", **pp);

  printf("&val = %p\n", &val);
  printf("p = %p\n", p);
  printf("sp = %p\n", &p);
  printf("pp = %p\n", pp);

  (*p)++;
  printf("val = %d\n", val);

  nextStep();

  int ersin = 3, mal = 5, *malersin, *ersinmal, *temp;
  malersin = &ersin;
  ersinmal = &mal;
  printf("%d %d %d %d \n", ersin, mal, *malersin, *ersinmal);
  temp = malersin;
  malersin = ersinmal;
  ersinmal = temp;
  printf("%d %d %d %d \n", ersin, mal, *malersin, *ersinmal);

  nextStep();

  int aba[5] = {4, 7, -3, -5, 9};
  int *pww, k;
  // indis, dizi ve adresini ekrana bas
  for (k = 0; k < 5; k++)
    printf("%d \t %d \t %p\n", k, aba[k], &aba[k]);
  pww = MinSayiBul(aba, 5);
  printf("\nEn kucuk deger: %d\n", *pww);
  printf("En kucuk adres: %p \n", pww);

  return 0;
}

void nextStep() { printf("\n\n|NextStep|\n\n"); }
int usAlma(int taban, int us) {
  if (us == 0)
    return 1;
  if (us == 1)
    return taban;

  int ilk = taban;
  int ikinci = usAlma(taban, us - 1);

  return ilk * ikinci;
}