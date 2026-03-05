#include <stdio.h>
int main(void)
{
    int data;

    printf("何段？\n");
    scanf("%d",&data);
    printf("-----------------------\n");
    for(int i = 0; i < data; i++)
    {
        for(int j = 0; j < data  -i ; j++)
        {
            printf("　");
        }
        for(int p = 0; p < 2 * i + 1 ; p++)
        { 
            printf("＊");
        }
        printf("\n");
    }

    return 0;
}