#include <stdio.h>


void hesap_mak(float a,float b,char c){
    if (c == '+'){
    printf("%.2f + %.2f = %.2f\n",a,b,a+b);   
    }
        
    else if (c == '-'){
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);   
    }
        
    else if (c == 'x'){
    printf("%.2f x %.2f = %.2f\n",a,b,a*b);   
    }
        
    else if (c == '/'){
    printf("%.2f / %.2f = %.2f\n",a,b,a/b);   
    }
        
    else{
    printf("Lütfen 4 işlemden birini seçiniz(+,-,x,/)");
    }
}



int main() {
    float a,b;
    char c;
    printf("1. sayıyı gir: \n");
    scanf("%f",&a);
    printf("İşlem seçiniz(+,-,x,/):\n");
    scanf(" %c",&c);
    printf("2. sayıyı gir: \n");
    scanf("%f",&b);
    hesap_mak(a,b,c);
    
    
  return 0;
}