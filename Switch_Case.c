#include <stdio.h>
#include <stdlib.h>

int main(){   
    int day;
    printf("Haftaiçinin gün sayısı gir: ");
    scanf("%d",&day);
    
    switch(day){    //day yerine sayı yazınca da çalışıyor zaten
    
        case 1:printf("Pazartesi\n");    // araya break koymayınca
        break;                           // çarş perş cum yazdırıyor
        case 2:printf("Salı\n");
        break;
        case 3:printf("Çarşamba\n");
        break;
        case 4:printf("Perşembe\n");
        break;
        case 5:printf("Cuma\n");
        break;
        default:printf("Hafya sonu o eşşek\n");// hiçbirine girmezse default
                                                // else gibi bişi 
    }
    // EĞER İF ELSE İF KULLANSAYDIK (BİRAZ EŞŞEKLİK YAPMIŞ OLURDUK)
    if(day==1){
       printf("Pazartesi\n"); 
    }
    else if(day==2){
        printf("Salı\n");
    }
     else if(day==3){
        printf("Çarşamba\n");        // yani üstteki daha pratik
    }
     else if(day==4){
        printf("Perşembe\n");
    }
     else if(day==5){
        printf("Cuma\n");
    }
         
    else{
        printf("Hafya sonu o eşşek\n");
    }

    return 0;
}