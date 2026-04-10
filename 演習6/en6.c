#include <stdio.h>


int main(void)
{
    int num1=0;
    int num2,num3=1;
    while(1)
    {
        if(num1 > 1000)
         {
            break;
         }
         printf("%d　",num1);
         num2 = num1 + num3;

         if(num2 > 1000)
         {
            break;
         }
         printf("%d　",num2);
         num3 = num1 + num2;
         
         if(num3 > 1000)
         {
            break;
         }
         printf("%d　",num3);
         num1 = num2 + num3;
    }

    return 0;
}
