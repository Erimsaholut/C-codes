#include <stdio.h>
#include <stdlib.h>

int main()
{
/* karşılaştırma komutları == != > < =< => */ 
    int x = 20;
    int y = 25;
    int z = 20;
    printf("%d\n",x==y); // eşit olmadığı için 0 döndürdü 
    printf("%d\n",x==z); // eşit olduğu için 1 döndürdü 
    printf("%d\n",y>=z); // 25 > 20 1 döndü 
    printf("%d\n",x!=y); // 25 20 eşit değil 
    

    
    return 0;
}

