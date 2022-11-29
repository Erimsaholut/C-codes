#include <stdio.h>
#include <stdlib.h>

void fibo(int a)
{
    int i,ilk=1,sonra=1;
    
    for(i=1;i<=a;i++){
        printf("%d ",ilk);
        printf("%d ",sonra);
        ilk = ilk+sonra;
        sonra = ilk+sonra;
    } 
}

int main()
{
    int a,b;

    printf("Sayı giriniz.\n");
    scanf("%d",&a);
    
    fibo(a);


    return 0;
}
