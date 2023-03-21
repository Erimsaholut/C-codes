union bir {
  int id;
  double dd;
  char cd;
} bd;

int main(void) {
	
  bd.id = 21;
  bd.cd = 'A';
  printf("%d %c\n", bd.id, bd.cd); /* 1 */
	// 21 A --->65 A ikisini de a aldı 
	
  bd.id = 127;
  printf("%d %c\n", bd.id, bd.cd); /* 2 */
	// 127 A ---> 127 a yı hiç almadı 
	
  bd.dd = 34.75;
  printf("%d %f\n", bd.id, bd.dd  ); /* 3 */
	// 127 34.75 ---> 0 34.7500 127 yi almadı 
printf("Yani en son atama yapılan değişkeni aklında tutabiliyor sadece\n");
	
  return 0;
}
