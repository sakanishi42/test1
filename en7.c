#include <stdio.h>

void pointa (int *p)
{
    *p = *p + *p;
    printf("%d\n",*p);
}
int main(void)
{

    int num = 30;
    pointa(&num);

    return 0;
}