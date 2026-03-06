#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int calc(int i,int j,char c)
{
    if (c != '*' && c != '/' && c !='+' && c != '-' & strlen(c) > 1) 
    {
        printf("正しい計算式を入力して下さい。\n");
        exit(1);
    }
    else
    {
        switch (c)
        {
        case '*':
            return i * j;
        case '/':
        /*if(i < j)
            printf("正しい計算式を入力して下さい。\n");
            exit(1);
        */
            return i / j;
        case '+':
            return i + j;
        case '-':
            return i - j;
        }
    }
}

int main(void)
{
    int num1,num2,sum;
    char c1;
    printf("計算式を入力して下さい。\n");
    if(scanf("%d %c %d", &num1, &c1, &num2) == 3)
    {
        sum = calc(num1,num2,c1);
        printf("%d %c %d = %d\n",num1,c1,num2,sum);
    }
    else
    {
        printf("正しい計算式を入力して下さい。\n");
    }
    return 0;
}