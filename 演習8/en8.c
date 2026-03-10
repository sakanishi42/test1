#include <stdio.h>

int prime(int n)
{
    int i = 0;
    if( n < 2)
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

int isZero(int i)
{
    if(i == 0)
    {
        printf("ZERO\n------------\n");
        return 1;
    }
    return 0;
}

void isInt(int i)
{
    if(i > 0)
    {
        printf("正の整数\n");
    }
    else
    {
        printf("負の整数\n");
    }
}

void isOdd(int i)
{
    if(i % 2 == 0)
    {
        printf("偶数\n");
    }
    else
    {
        printf("奇数\n");
    }
}

void isPrime(int i)
{
    if(prime(i))
    {
        printf("素数\n");
    }
    else
    {
        printf("素数ではない\n");
    }
}

int main(void)
{
    int num = 0;
    scanf("%d",&num);
    if(isZero(num))
    {
        return 0;
    }
    void (*jump_table[])(int) = {isInt,isOdd,isPrime};
    int length = sizeof(jump_table) / sizeof(jump_table[0]);

    for(int i = 0; i < length; i++)
    {
        jump_table[i](num);
    }
    return 0;
}
