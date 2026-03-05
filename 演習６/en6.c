#include <stdio.h>


int main(void)
{
    int i,j,k;
    i=0;
    j,k=1;
    while(1)
    {
        if(i > 1000)
         {
            break;
         }
         printf("%d　",i);
         j = i + k;

         if(j > 1000)
         {
            break;
         }
         printf("%d　",j);
         k = i + j;
         
         if(k > 1000)
         {
            break;
         }
         printf("%d　",k);
         i = j + k;
    }

    return 0;
}