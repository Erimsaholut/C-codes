#include <stdio.h>

int main() {
    int matris_boy,i,j,k=0;
    char ogr_isim[11] = "erimsaholut";
    
    do{
        printf("Lutfen olusturulacak matrisin bir kenar uzunlugunu giriniz:\n");
        scanf("%d",&matris_boy);
        if(matris_boy>15||matris_boy<5){
            printf("Hatali deger girdiniz. 5 ve 15 arasinda bir deger seciniz.\n");
        }       
    }while(matris_boy<5 || matris_boy>15 );
    
    char matris[matris_boy][matris_boy];
              
    for(i=1;i<=matris_boy;i++){
        
        for(j=1;j<=matris_boy;j++){
            matris[i][j] = ogr_isim[k%11];
            printf("%c\t",ogr_isim[k%11]);
            k++;
        }       
        printf("\n");
    }
    return 0;
}