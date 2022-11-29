#include <stdio.h>
#include <stdlib.h>

int main(){   
    int yas;
    printf("Yaşını gir: \n");
    scanf("%d",&yas);

    if (yas >= 18){
        printf("%d yaşındakiler oy verebilir. 😎",yas);
    }
    else{
        printf("%d yaşındakiler oy veremez. 😭",yas);
    }

     
    return 0;
}