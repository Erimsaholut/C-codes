#include <stdio.h>
#include <stdlib.h>

int main()
{
/*     && = and , ||= or , != not    */
    int x = 25;
    int y = 20;
    printf("%d\n",x>20 && x<30); //x büyüktür 20den ve küçüktür 30d
    printf("%d\n",x>20 || x<24); //x büyüktür 20 ya da küçüktür 24
    printf("%d",!(x>100)); // parantez içindeki 0 ! değili demek 1 
 
    
    return 0;
}