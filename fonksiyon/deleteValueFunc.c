#include <stdio.h>
#include <stdlib.h>

void maks(int dizi[],int a){
    int maks,i;
    maks = dizi[0];
    for(i=0;i<a;i++){
        if(dizi[i]>maks){
            maks = dizi[i]; 
        }
    }
    printf("\nEn büyük sayı %d",maks);

}
void min(int dizi[],int a){
    int min,i;
    min = dizi[0];
    for(i=0;i<a;i++){
        if(dizi[i]<min){
            min = dizi[i]; 
        }
    }
    printf("\nEn küçük sayı %d\n",min);

}
void delet(int dizi[],int a,int sil){
    int i;
    if (sil>a){
        printf("Nasıl sileyim onu amk");
    }
    else{
        
        for (i=sil-1;i<=a;i++){
            dizi[i]=dizi[i+1];
        }
        
        printf("Dizinin yeni hali: \n");
        
        for(i=0;i<a-1;i++){
            printf("%d\t",dizi[i]);
        }
        
    }


    
    }











int main()
{
    int a,sil;
    printf("Kaç adet rastgele sayı istiyorsunuz:\n");
    scanf("%d",&a);
    int dizi[a];
    srand(time(0));
    printf("Dizinin elemanları:\n");
    for(int i = 0;i<a;i++){
        dizi[i] = rand()%100;
    }
    for(int i = 0;i<a;i++){
        printf("%d ",dizi[i]);
    }
    maks(dizi,a);
    min(dizi,a);
    printf("'Kaçıncı' rastgele sayıyı silmek istiyorsunuz:\n");
    scanf("%d",&sil);
    delet(dizi,a,sil);
    
    
    return 0;
}
