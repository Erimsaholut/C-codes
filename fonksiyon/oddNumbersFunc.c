#include <stdio.h>

void kadartek(int a){
    
    for(int i=1;i<a;i+=2){
        
        printf("%d\n",i);    
        
    }
}




int main() {
    int a;
    printf("Kadar tek sayı bulucuya hoşgeldiniz\n");
    printf("Bir adet sayı giriniz: ");
    scanf("%d",&a);
    kadartek(a);
    
  return 0;
}