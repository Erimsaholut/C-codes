#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("\n######### İşaretçi Zinciri #############\n\n");

  int val = 1903;
  int *p = &val;
  int **pp = &p;
  int ***ppp = &pp;

  printf("Degerler:\n************\n");
  printf("val = %d\n", val);
  printf("tp = %d\n", *p);
  printf("**pp = %d\n", **pp);
  printf("***pp = %d\n", ***ppp);

  printf("\nAdresler:\n************\n");
  printf("&val = %d\n", &val);
  printf("p = %d\n", p);
  printf("sp = %d\n", &p);
  printf("pp = %d\n", pp);
  printf("pp = %d\n", ppp);

	printf("\n######### İşaretçilerle  İşlemler #############\n\n");

  int *ip;
  int idizi[5] = {6, 20, 30, 65, 95}; // sırayla 5 adet in oluştu bellekte.
	
  printf("isaretci bellek adresi: %p\n\n", &ip);
  ip = &idizi[4];
  printf("isaretcinin icerdigi adres: %p\n", ip);
  printf("isaretcinin gosterdigi degisken degeri: %d\n\n", *ip);
	
  ip -= 2; // ip -= (4 * sizeof (int));
  printf("isaretcinin icerdigi adres: %p\n", ip);
  printf("isaretcinin gosterdigi degisken degeri: %d\n\n", *ip);
	//bellekten bi değeri tutarken 2 intlik geriye gitti bi baktı orada da listenin 3. değeri var.  

  return 0;
}
