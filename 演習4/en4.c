#include <stdio.h>
int main(void)
{
    double data;
    double sum = 0;
    int i;
    while(1)
    {
        scanf("%lf",&data);
        if(data == 0)
        {
            break;
        }
        sum = sum + data;
        i++;
    }

    sum = sum / i;
    printf("%lf" ,sum);
    
    return 0;
}