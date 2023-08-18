#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 
  
int main()  
{  
    int i, t, pool[99], result[4];  
      
    /* Intializes random number generator */  
    srand(time(NULL));  
      
    /* Fill pool with 0..9 */  
    for(i=0;i<10;i++)  
        pool[i]=i;  

    /* Loop for result[0]..result[3] */  
    i=0;  
    while(i<4)  
    {  
        t=rand()%9+1;
        if(pool[t])  
        {  
        
            result[i++]=pool[t];  
            pool[t]=0;  
        }  
    }  

    /* print result */  
    for(i=0;i<4;i++)  
        printf("%d", result[i]);  
    printf("\n");  
  
    /* Calm down compiler */  
    return 0;  
}  
