#include <stdio.h>
#include <stdlib.h>

int main(){   
    int i;
    for(i=1;i<=10;i++){  // 1 den 10 a kadar yazma komutu bu


        
        printf("%d\n",i);
        if(i== 5){

            break;  // bu direkt amına koydu her şeyin
        }

        
    }
    
    printf("#########\n");

        
    for(i=1;i<=10;i++){  // 1 den 10 a kadar yazma komutu bu da 

        if(i== 5){

            continue ;  // bu 5 i atlattırdı 
        }
        
        printf("%d\n",i);
       
    }
    
      printf("#########\n");




    
    for(i=1;i<=10;i++){  // 1 den 10 a kadar yazma komutu bu da 
            if(i== 5){
    
                continue ;  // bu 5 i atlattırdı 
            }
            
            printf("%d\n",i);
            if (i==8){         //bu 8 de dururdu 
                break;

                
            }
       
    }
    

    
    return 0;
}