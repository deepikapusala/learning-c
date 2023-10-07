#include <stdio.h>                       
int main()
{
    int i, j;
    i = 1;
    do                                                 
    {                                                  
        j = 1;                                            
        do                                                   
        {                                                    
            printf("\t*");                                    
            j++;                                          
        } while (j <=i);                         
        i++;
        printf("\n");
    } while (i <=5);

   //   printf("*\t*\t*\t*\t*\n*\t*\t*\t*\n*\t*\t*\n*\t*\n*");
    return 0;
}