#include <stdio.h>
int prime(int n)
{
    int i;
    if( n < 2 )
    /*2未満*/
    {
        return 0;
    }
    
    for(i = 2; i < n; i++)
    {
        if( n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main (void)
{
    
    unsigned int i = 0;
int data1;
    scanf("%d",&data1);
    if(data1 != 0)
    {
        if(data1 > 0)
        {
            printf("正の整数\n");
            i = data1;
        }
        else
        {
            printf("負の整数\n");
        }

        if(data1 % 2 == 0)
        {
            printf("偶数\n");
        }
        else
        {
            printf("奇数\n");
        }

        if(prime(i))
        {
            printf("素数\n");
        }
        else
        {
            printf("素数ではない\n");
        }

    }
    else
    {
        printf("ZERO\n");
        printf("-------------\n");
        printf("素数ではない\n");
    }



    return 0;
}

