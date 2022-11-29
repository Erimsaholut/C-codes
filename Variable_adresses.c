#include <stdio.h>
#include <stdlib.h>
int kare_al(int mare){
    
    int sonuc = mare*mare;


    return sonuc ;
}

int pare_al(int *sonuc, int *y){
    
    *sonuc = *y * *y;

}

int main()
{
    int x = 4, karesi;

    karesi = kare_al(x);

    printf("%d\n",karesi);

    // # # # # # # # # # # # # # # # 
    
// burada &y yazıp bu değişkenlerin adreslerini yolladık direkt 
// ve adresten geri aldık o yüzden returne gerek kalmadı 
    int y = 4, kare;
    int sonucum;
    
    pare_al(&sonucum, &y);       
                                
    printf("%d\n",sonucum);
        
    return 0;
}