#include <stdio.h>
#include <stdlib.h>
int iks(){
    int x = 2;
    printf("%d\t",x); 
    
    
}



int main()
{
    int x = 5 ;
    {
    int x = 4;
    {
    int x = 3; 
    iks();
    printf("%d\t",x);        //herkes kendi çöplüğünde ötüyor kısaca
    
    }
    printf("%d\t",x);
    }
    printf("%d\t",x);


    

    
   
    return 0;
}