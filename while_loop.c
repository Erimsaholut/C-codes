#include <stdio.h>
#include <stdlib.h>

int main(){   
    int i= 1 ,çarpsay= 1 ;

    while(i<51){     // bu kondisyon olduğu sürece devam

        if (i==31) {        //1  ekliyor 31 olunca gülüyor işte
        printf("🤣 ");
        }

            
        else{
        printf("%d ",i);
        }

        
        i+=1;
         
    }

    
//####################################################################

    
    printf("\nSayı giriniz: ");
    scanf("%d",&i);             // 10 a kadar katlarını yazıyor sayının
    while(çarpsay<11){
        
        printf("%d\n",i*çarpsay);
        
        çarpsay += 1; 
        
    }



    
    return 0;
}