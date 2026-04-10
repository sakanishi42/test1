#include <stdio.h>
int main(void)
{
    double data ,sum = 0;
    int i = 0;
    printf("入力された数字の平均値を求め、０が入力されると終了します。\n");
    while(1)
    {
        printf("数字を入力して下さい。\n");
        scanf("%lf",&data);
        if(data == 0)
        {
            break;
        }
        sum = sum + data;
        i++;
    }

    if(i == 0)
    {
        printf("数字が入力されませんでした\n");
    }
    else
    {
        sum = sum / i;
        printf("平均値は%lfです\n" ,sum);
    }
    
    return 0;
}
