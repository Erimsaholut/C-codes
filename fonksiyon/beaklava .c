#include <stdio.h>
#include <stdlib.h>
void beaklava(int a){
    
    int i,j,bosluk,harf,artı=a-1,x=1;
    
    for (i=1; i<=a; i++)                      //a yazdırma döngüsü
    {                   
        
        for(bosluk=a-i; bosluk>0; bosluk--)   //a nın boşluk döngüsü 
        {
            
            printf(" ");
        }
        
        harf = 2*i-1;
        for(j=0;harf>j;j++)                    //a nın harf döngüsü 
        {
            printf("a");  
        } 
        
        if(i!=a+1){
        printf("\n"); 
        }
    }

    for (i=1; i<=2*(a+1); i+=2) 
    { 
        if(x!=a+1 && x!=a )
        {
            for(bosluk=0;x>bosluk;bosluk++)   //+ nın boşluk döngüsü 
            {
                
                printf(" ");
            }
        }
        x++;

        //   5 3 1 artı = 3
        harf = artı*2-i;

        for(j=0;harf>j;j++)                    //a nın harf döngüsü 
        {
            
            printf("+");  
        } 
        printf("\n"); 
        
    }    
}





int main(){
    int a;
    printf("Beaklawa kaç satırdan oluşsun:\n");
    scanf("%d",&a);
    
    beaklava(a);
    
        
    
    return 0;
}
