#include <stdio.h>

void pointa (int *i,int *j)
{
    int num = *i;
    *i = * j;
    *j = num;
}


int main(void)
{
    int num = 10;
    int num1 = 100;
    printf("%d->%d\n", num, num1);
    pointa(&num,&num1);
    printf("%d->%d\n", num, num1);

    return 0;
}