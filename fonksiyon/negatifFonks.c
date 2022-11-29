#include <stdio.h>


void sayigir(){
    int a,i = 0;
    
    do{
        printf("Negatif bir sayı giriniz: ");
        scanf("%d",&a);
        i++;
    }while(a>0);
    
    printf("%d. denemede negatif sayıyı buldun süpersin",i);
}



int main() {
    sayigir();
    
  return 0;
}