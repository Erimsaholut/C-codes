#include <stdio.h>


int hesap_mak(int a){
    int i=1,toplam=1;
    
    while(i<a){
    toplam += toplam*i;
    i++;
    
    }
    return toplam;
}



int main() {
    int a;
    char c;
    printf("1. faktöriyel gir: \n!");
    scanf("%d",&a);
    printf("%d! sayısının toplam değeri %d",a,hesap_mak(a));

    
    
  return 0;
}