#include <stdio.h>
#include <pthread.h>
typedef void (*InputCallback)(char);

void key_input(char str)
{
    printf("%c\n", str);
}

void* key_watch(void *arg) 
{
    InputCallback callback = (InputCallback) arg;
    char ch;
    printf("文字を入力してください (qで終了)\n");

    while (1) {
        scanf(" %c",&ch);
        if (ch == 'q')
        {
            return 0;
        }
        if (callback != NULL) 
        {
            callback(ch);
        }
    }
    return 0;
}

int main() 
{
    pthread_t th;
    
    pthread_create(&th, NULL, key_watch, (void*)key_input);
    pthread_join(th, NULL); 

    printf("終了\n");
    return 0;
}