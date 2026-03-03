#include <stdio.h>
#include <string.h>


void pointa (char *i)
{
    printf("%s\n",i);
}

int main(void)
{
    char c[] ="Hello World!";
    pointa(c);
    return 0;
}