#include <stdio.h>
#include <stdlib.h>
#define PI 3.14   
//object like makro
#define circleArea(yarı_cap) (PI*yarı_cap*yarı_cap)
//function-like makro bu da
#define PATATO 4

#if !defined PATATO || PATATO < 3
#error Patato is not defined or less than 3
#endif
// üstteki patatoyu siler ya da küçültürsen errordeki hatayı veriyor 

int main()
{
    /*  c preprocessorleri #include #define #undef #ifdef #ifndef 
    #if #else #elif #endif #error #pragma  */
    // bunlar bizim makro atamamızı sağlıyor 
    
    // 2 çeşit makro var object-like makro ve function-like makro 
    // object-like #define PI 1.14 
    // function-like #define circleArea(r) (PI*r*r)

    //predefined makrolar önceden yüklü olan makrolar 
    // __DATE__ , __FILE__ , __LINE__ , __STDC__ , __TIME__

    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("STDC :%d\n", __STDC__ );

    float yarı_cap,alan;
    printf("Lütfen yarıçap giriniz: ");
    scanf("%f",&yarı_cap);
    alan = circleArea(yarı_cap);
    printf("%.2f yarıçaplı dairenin alanı: %.2f\n",yarı_cap,alan);

    //include:kütüphane açar 
    //define tanımlama yapmak için 
    //undef tanımlananı kaldırmak için
    //ifdef else endif örneği aşağıda var 
    //error kendi hatamızı yapmak için örnek üstte
    
    #ifdef PI
    printf("PI 3 ten büyüktür.\n");
    #else 
    printf("PI 3 ten küçüktür.\n");
    #endif
    


    
    return 0;
}