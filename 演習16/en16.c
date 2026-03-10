#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int calc(int num1,int num2,char operator)
{
    if (c != '*' && c != '/' && c !='+' && c != '-') 
    {
        printf("正しい計算式を入力して下さい。\n");
        exit(1);
    }
    else
    {
        switch (operator)
        {
        case '*':
            return num1 * num2;
        case '/':
        if (num1 == 0 || num2 == 0)
        {
            printf("正しい計算式を入力して下さい。\n");
            exit(1);
        }
        
            return num1 / num2;
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        }
    }
}

int main(void)
{
    int num1,num2,sum;
    char operator;
    printf("計算式を入力して下さい。\n");
    if(scanf("%d %c %d", &num1, &operator, &num2) == 3)
    {
        sum = calc(num1,num2,operator);
        printf("%d %c %d = %d\n",num1,operator,num2,sum);
    }
    else
    {
        printf("正しい計算式を入力して下さい。\n");
    }
    return 0;
}