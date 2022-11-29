#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 //bu da sabitlemek için


int main()
{
    // const değişkenin sabit kalmasını müdahale edilememsini sağlıyor.
    const int sabit= 31;
  //sabit= 62 ; bunu açarsak hata veriyor 
    printf("%.2f\n",PI);
    printf("%d",sabit);


    
    return 0;
}

