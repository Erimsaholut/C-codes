#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 3;
    int y = 1;
    if(x>y)
    {
        printf("Doğru adamım.\n");  
    }
    else
    {
        printf("That's not right man.\n");
  
    }

    //if(x>y)            Kod tek satırsa böyle bir yazım tarzı 
    //printf("Doğru adamım.");                             da var.
  
    printf("x sayısını giriniz:\n");
    scanf("%d",&x);
    printf("y sayısını giriniz: \n");
    scanf("%d",&y);

    if(x==y)       
    {
        printf("x ve y eşittir.\n");  
    }
    else if(x>y)   
    {
        printf("x y'den büyüktür.\n"); 
    }
    else       
    {
        printf("y x'ten büyüktür.\n");
  
    }


    
    



    
    return 0;
}