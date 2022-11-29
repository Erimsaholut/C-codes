#include <stdio.h>
#include <ctype.h>

int main() {
    /*
    int secim;
    printf("**************** Camelot Turizm A.S. ****************\n");
    printf("1.Orta Avrupa Turu\n");
    printf("2.Güney Amerika Turu\n");
    printf("3.Kuzey Amerika Turu\n");
    printf("4.Uzak Doğu Turu\n");
    printf("*****************************************************\n");
    printf("Bilgi almak istediğiniz turu seçiniz(1,2,3,4):\n");
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            printf("Ucak ile Viyana,Budapeste Prag Turu\n");
            printf("4 yildizli otellerde sok fiyat! 1700$\n");
            break;
        case 2:
            printf("Ozel ucak ile Sao Paulo, Rio de Jenario, Buenos Aires Turu.\n");
            printf("5 yildizli otellerde sok fiyat! 2950$\n");
            break;
        case 3:
            printf("Ozel ucak ile New York, Boston, Los Angles Turu.\n");
            printf("5 yildizli otellerde sok fiyat! 3000$\n");
            break;
        case 4:
            printf("Ozel ucak ile Hong Kong, Tokyo, Pekin Turu.\n");
            printf("5 yildizli otellerde sok fiyat! 4000$\n");
            break;
        default:
            printf("Allah bilir neye bastin.\n");
            break;
    }
     */
    /*
    char c;
    printf("c gir: ");
    scanf("%c",&c);
    switch (c) {
        case 'A':
        case 'a':
            printf("akp");
            break;
        case 'B':
        case 'b':
            printf("bdp");
            break;
        default:
            printf("Yanlis girdin kurban oldugum.");
            break;
    }*/
    for (int i=0;i<5;i++){
        
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    

     
}
