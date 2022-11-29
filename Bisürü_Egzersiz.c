#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
  float a,b,c,x,sonuc;
  printf("4 adet değer giriniz: ");
  scanf("%f%f%f%f",&a,&b,&c,&x);
  sonuc = a*x*x+b*x+c;
  printf("a^2 + bx + c değerimi: %.2f",sonuc);
  */

  /*
  float a,b,h;
  printf("Dikdörtgenler prizmasının a b ve h değerlerini giriniz: ");
  scanf("%f%f%f",&a,&b,&h);
  printf("taban alanı:%.2f \n",a*b);
  printf("yanal alanı: %.2f \n",a*h*2 + b*h*2);
  printf("toplam alan %.2f \n",a*b*2 + a*h*2 + b*h*2);
  printf("Hacmi: %.1f\n ",a*b*h);
    */
    
    /*
    int  a, b, c;
    int maks,min;
    printf("sayıları gir\n");
    scanf("%d%d%d",&a,&b,&c);
    
    maks = a;
    min = a;
    if(b<a)
    {
        min = b;
    }
    if (c<a)
    {
        min = c  ;  
    }
        
    if(b>a)
    {
        maks = b;
    }
    if(c>a)
    {
        maks = c;
    }
    printf("maksimum: %d, minimum: %d",maks,min);
    */
    
    /*
    int ilk,son;
    printf("2 adet sayı giriniz.\n");
    scanf("%d%d",&ilk,&son);
    printf("%d",ilk%son);
    printf("############\n");
    if (ilk>son){
        printf("İlk sayı daha büyüktür.\n");
    }
    else if (son>ilk){
        printf("İlk sayı daha küçüktür.\n");
    }
    else{
        printf("Sayılar eşittir.\n");
        }
    if (ilk%son ==0){
        printf("birinci sayı ikincinin katı.\n");
    }
    else{
        printf("Birinci sayı ikincinin katı değil\n");
    }
    */
    
    /*
    int a,toplam=0;
    printf("1 adet sayı giriniz.\n");
    scanf("%d",&a);
    
    while (a != 0)
    {
        if (a != 1){
        printf("%d + ",a);
        }
        else{
            printf("%d = ",a);
        }
        toplam += a;
        a -= 1;
        
        
    }
    printf("%d",toplam);
    */

    /*
    int a,b=0;
    printf("1 adet sayı giriniz.\n");
    scanf("%d",&a);
    
    while (a != 0)
    {
        printf("%d\t",a);
        a -= 1;
        
    }
    */

    /*
    float x;
    printf("x^3 + 13x^2 + 47x + 5\n");
    printf("x sayısını giriniz.\n");
    scanf("%f",&x);
    printf(">>> f(%.3f) = %.3f",x,x*x*x +13*x*x +47*x +5);
    */
    /*
    int a,b;
    printf("2 adet sayı giriniz.\n");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0|| a<0 && b<0){
        printf("sign(%d*%d) = +1 ",a,b);
    }
    else if(a==0 || b==0 ){
        printf("sign(%d*%d) = 0 ",a,b); 
    }
    else{
       printf("sign(%d*%d) = -1 ",a,b);
    }
    */
    
    /*
    int max,b=0,i=0;
    printf("1 adet sayı giriniz.\n");
    scanf("%d",&max);
    while (b <= max){
        if (i!=10){
        printf("%d\t",b);
        b += 17;
        i += 1;
        } 
        else{
            printf("\n");
            i = 0;
        }
    }
    */
    
    /*
    int a;
    printf("1 adet sayı giriniz.\n");
    scanf("%d",&a);
    printf("birler bas :%d\n",(a%10)%10);
    printf("onlar bas :%d\n",(a%100)/10);
    printf("yüzler bas %d\n",(a/100));
    */

    /*
    #define mıl 1.609
    float a;
    printf("Milden kmye dönüşütürücüye hoşgeldiniz.\n");
    printf("Mil sayısını giriniz:\n");
    scanf("%f",&a);
    printf("%.3f km yol gitmiştir.",a*mıl);
    */

    /*
    #define PI 3.141
    float r;
    printf("Daire alanı bulunucuya hoşgeldiniz.\n");
    printf("Yarı çap giriniz: \n");
    scanf("%f",&r);
    printf("Dairenin alanı = %.2f ",PI*r*r);
    */

    /*
    float en,boy,yükseklik;
    printf("en boy yükseklik giriniz.\n");
    scanf("%f%f%f",&en,&boy,&yükseklik);
    printf("Havuzun hacmi = %.2f m^2 \n",en*boy*yükseklik);
    */

    /*
    float a,b,c;
    printf("A sayısını giriniz: \n");
    scanf("%f",&a);
    printf("B sayısını giriniz: \n");
    scanf("%f",&b);
    printf("A sayısı = %.1f ,B sayısı = %.1f \n",b,a);
    c = a;
    a = b;
    b = c;
   printf("A sayısı = %.1f ,B sayısı = %.1f \n",a,b);
   */

    /*
    #define metrekare 40
    #define iscilik 200
    float a;
    printf("Salonun kaç m^2 olduğunu giriniz: ");
    scanf("%f",&a);
    printf("Halının dikim maliyeti :%.2f",a*metrekare+iscilik);
    */

    /*
    #define tweety 18
    #define bugs 17
    #define spider 19
    float a;
    char b;
    printf("Salonun kaç m^2 olduğunu giriniz: ");
    scanf("%f",&a);
    printf("Halının tipini giriniz ('t','b','s'): ");
    scanf(" %c",&b);
    if (b =='t'){
        printf("Halının dikim maliyeti :%.2f",a*tweety);
    }
    else if (b =='b'){
        printf("Halının dikim maliyeti :%.2f",a*bugs);
    }
    else if (b =='s'){
        printf("Halının dikim maliyeti :%.2f",a*spider);
    }
    else{
        printf("Adam gibi söyle boğazını keserim senin");
    }
    */

    /*
    int a;
    printf("Bir sayı giriniz: ");
    scanf("%d",&a);
    
    if (a%221==0){
        printf("Sayımız hem 17 hem de 13 ile tam bölünüyor.\n");
    }
    else if (a%17==0){
        printf("Sayımız 17 ile tam bölünüyor.\n");
    }
    else if (a%13==0){
        printf("Sayımız 13 ile tam bölünüyor.\n");
    }
    else{
        printf("Sayı ne 13e ne 17ye bölünüyor :( ");
    }
    */
    /*
    float a,b,c,ort;
    printf("3 adet sayı giriniz: \n");
    scanf("%f%f%f",&a,&b,&c);
    ort = (a+b+c)/3;
    printf("Girdiğiniz sayıların ortalaması = %.2f \n",ort);
    */

    /*
    int a,b,c,top;
    printf("3 adet sayı giriniz: \n");
    scanf("%d%d%d",&a,&b,&c);
    top = a*110 + b*10 + c;
        
    printf("Yeni sayımız = %d \n",top);
    */

    /*
    float a;
    printf("İstanbul'dan Ankara'ya kaç saatte gittiniz: \n");
    scanf("%f",&a);
    printf("Saatteki ortalama hızınız: %.2f",450/a);
    */

    /*
    char a;
    printf("Büyük harf giriniz: \n");
    scanf("%c",&a);
    if((a>64)&&(a<91)){
        printf("%c\n",tolower(a));
    }
    if((a>'A')&&(a<'Z')){
        printf("%c\n",tolower(a));
    }
    else{
        printf("Büyük dedim eşşşşek herif");
    }
    */
    
    /*
    //5 girdik 1/2 + 2/3 + 3/4+4/5
    float a,b=2,i,top = 0;

    do{
        
    printf("1 tane sayı giriniz: \n");
    scanf("%f",&a);
    }
    while(a<1);     //a sayısı 1 den büyük olana kadar soruyor
        
    for(i=1;i<a;i++){
        top += i/b;
        b += 1;
    }
    
    printf("%.2f",top);
    */

    /*
    float a,b;
    
    do{ 
    printf("1 tane sayı giriniz pozitif olsun: \n");
    scanf("%f",&a);
        if(a<0){
            printf("Lütfen \"Pozitif\" bir sayı giriniz.\n");
        }
        if (a <= 0) continue;
        printf("Sayımızın karekökü %.2f",sqrt(a)); 

        if (a == 0){
        exit(0);
        }
        
    }
    while(a<0);
    */

    /*
    int a,b;
    printf("2 adet sayı giriniz.\n");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0|| a<0 && b<0){
        printf("%d*%d pozitiftir.\n ",a,b);
    }
    else if(a==0 || b==0 ){
        printf("%d*%d 0'a eşittir.\n",a,b); 
    }
    else{
       printf("%d*%d negatiftir.\n",a,b);
    }
    */    
  return 0;
}