#include <stdio.h>
#include <stdlib.h> 
                
int main()
{ 
    //ÇOK BOYUTLU SAYI DİZİLERİ 
    //matris oluşturmak için kullanılır
    //dizinin dizisi şekilde mesela M[4][3]  3 elemanlı 4 tanelik dizi
    //   M =  [aaA] [bbb] [ccc] [ddD] gibi 
    //M[0][0]= a M[0][2]=A M[3][2]= D gibi gibi  

    int matris[3][2]={{1,2},{3,4},{5,6}},top=0,a,n;
    printf("%d",matris[0][0]);

    for (a=0;a<3;a++){
        for(n=0;n<2;n++){
        top += matris[a][n];
            }

        
    }
 for (a=0;a<3;a++){
        for(n=0;n<2;n++){
        printf("%d\t",matris[a][n]);
            }

        
    }
    printf("%d\t",top);
    int kapris[1][1] = {{top}};
    printf("kapris :%d\n",kapris[0][0]);


    //bundan sonrası hocanın ve kendimin kendime yaptığı quizler gibi
    printf("####################\n");

    int i,j,q;
    int tetris[10][10];

    for(i=0;i<10;i++)
    {  
        
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                tetris[i][j] = 1;
            }
            else{
                tetris[i][j] = 0;
        }
        }  
        } 
    
    for(i=0;i<10;i++)
    {
            for(j=0;j<10;j++)
            {
                printf("%4d",tetris[i][j]);
                
            }  
        printf("\n");
    }     
    

    printf("####################\n");
    // çerçeve ve x şeklinde basma 
    
    int petris[10][10];

    for(i=0;i<10;i++)
    {  
        
        for(j=0;j<10;j++)
        {
            if(i==j||j==0||i==0||i==9||j==9)
            {
                petris[i][j] = 1;
            }
            else{
                petris[i][j] = 0;
                }
            q=0;
            for (n=9;n>-1;n--){
                petris[n][q] = 0;
                petris[n][q] = 1;
                q++;
                }
        }
        
    }  
        
    for(i=0;i<10;i++)
    {
            for(j=0;j<10;j++)
            {
                printf("%4d",petris[i][j]);
                
            }  
        printf("\n");
    }     
     
    return 0;
}
