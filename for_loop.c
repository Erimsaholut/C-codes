#include <stdio.h>
#include <stdlib.h>

int main(){   
     //for(başlangıç değeri;doğru olduğu sürece,ne yapayım)
    int i; 
    for(i=1;i<=5;i++){    //i=1; 5 olana kadar;1 ekle
        printf("%d ",i);
    }
    
    printf("\n");   //Boşluk için bu, for loopta nereye koyim bilemedim

    
    int deger,toplam = 0;
    
    printf("Bir sayı giriniz: ");
    scanf("%d",&deger);
    
    for(i=1;i<=deger;i++){    //i değere eşit olana kadar devam
        toplam += i;         //teker teker ekliyor
    }
    printf("%d sayısına kadar olan sayıların toplamı  %d\n",deger,toplam);

printf("\n");
    
    toplam = 0,deger=0;
    
    for(i=1;i<=10;i++){
        
    if (i%2==0){
        toplam += i; }
        
    else{
        deger += i; }

        
    }
    
printf("1 den 10 a kadar olan tek sayıların toplamı %d, çift sayıların toplamı %d, bütün sayıların toplamı %d",deger,toplam,deger+toplam);

 // tek ya da çift sayıları bulmak için bunu da yapabilirsin:
    // for(i=0ya da i=1 ; i<=10 ; i += 2)


    
    return 0;
}
