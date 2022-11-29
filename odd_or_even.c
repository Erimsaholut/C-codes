#include <stdio.h>
#include <stdlib.h>

int main(){   
    int sayı;
    printf("Sayı gir: \n");
    scanf("%d",&sayı);

    int odd_even = sayı%2;

    if (odd_even == 1){
    printf("%d tek sayıdır.",sayı);
    }
    else{
        printf("%d çift sayı.",sayı);
    }

     
    return 0;
}