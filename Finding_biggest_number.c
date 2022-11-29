#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;                        //benim 1.yol 
    printf("sayı 3 tane \n ");
    scanf("%d%d%d",&x,&y,&z);
    if(y>x)
    {
        x=y;
        
    }                            
    if(z>x)
    {
        x=z;
    }
   printf("%d\n",x);
    
    int a,b,c;                          //hocanın 2. yol
    printf("sayı 3 tane \n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
       printf("En büyük %d\n",a);    
    }
    else if(b>a && b>c)
    {
        printf("En büyük %d\n",b);      
    }
    else
    {
        printf("En büyük %d\n",c);       
    }



    
     
    return 0;
}