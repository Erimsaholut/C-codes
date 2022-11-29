#include <stdio.h>
#include <stdlib.h>

void floyd(int a)
{
    int i,b=1,artismik=1;
    
    for(i=1;i<=a;i++){

        printf("%d ",i);
        if(i==b){         //i= 1 2 3 4 5 6 7 8 9 10 
            printf("\n"); //b= 1   3     6       10    15
        artismik++; 
        b+=artismik;
        }
        
    }


}

int main()
{
    int sayi;
    printf("Floyd üçgeninizin eleman sayisini giriniz:\n");
    scanf("%d",&sayi);
    floyd(sayi);
    

    return 0;
}
