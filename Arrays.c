#include <stdlib.h>
#include <stdio.h>


int main(){
    //diziler 

    int dizimizi[5]={1,2,3,31,999};
    // 5 elemanlı bir int dizisi oluşturduk

    dizimizi[1]= 23;
    // dizimizinin 2. elemanını 23 yaptık

    
    int i;
    for(i=0;i<5;i++){   
    printf("%d = %d. eleman \n",dizimizi[i],i);
       } 
    //dizimizi yazdırdık ve eleman numarasına baktık 

    int ilk_on_çift_sayı[11];
    
    for(i=1;i<=11;i++){
        ilk_on_çift_sayı[i]=i*2;
        }
     //diziye çift sayıları ekleyen bir algoritma //
    
    for(i=1;i<=10;i++){
        printf("%d\t",ilk_on_çift_sayı[i]);
        }
     //bu da yazdırmak için




    
   
        
        
        
}

    
