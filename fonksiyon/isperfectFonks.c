#include <stdio.h>

int isperfect(int a){
    int i,toplam=0;
    
    for(i=1;i<a;i++){
        
        if(a%i==0){
            toplam += i;
        }
    }   

    
    if (toplam == a){
    return 1;
    }
    else{
        return 0;
    }
}




int main() {
    int a;
    printf("Mükemmel sayı kontrol ediciye hoşgeldiniz\n");
    printf("Bir sayı giriniz: ");
    scanf("%d",&a);
    
    if (isperfect(a)){
        
        printf("Mükemmel");
        
    }
    else{
        
        printf("Bok gibi sayı");
        
    }
    
  return 0;
}