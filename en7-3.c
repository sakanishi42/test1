#include <stdio.h>
#include <string.h>


void pointa (char *i)
{
    int len = strlen(i);    
    for (int j=0 ; j<len/2 ; j++)
    {
        char str = i[j];
        i[j]= i[len - j - 1];
        i[len - j - 1] = str;
    }
    printf("%s\n",i);
}

int main(void)
{
    char c[] ="Hello World!";
    pointa(c);
    return 0;
}