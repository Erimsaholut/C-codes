#include <stdio.h>

int main(void) {
	
int maks,min,artis,i;
do{
	printf("Minimum degeri giriniz: \n");
	scanf("%d",&min);
	if(min<3){
		printf("Lütfen ikiden büyük bir sayı girip tekrar deneyiniz! \n");
	}
}while(min<3);
	printf("Maksimum degeri giriniz: \n");
	scanf("%d",&maks);

		printf("Artis miktarini giriniz: \n");
	scanf("%d",&artis);

	for(i=min ; maks>i ; i +=artis){
		printf("%d\n",i);
		
	}
	
  return 0;
}