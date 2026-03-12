#include <stdio.h>
#include <pthread.h>

typedef void (*input_key)(char);
char input_ch = '\0';
int data_flag = 0;      

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;


void callback(char ch) 
{
    pthread_mutex_lock(&mutex);
    data_flag = 1;
    input_ch = ch;
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&mutex);
}


void* key_watch(void *arg)
{
    input_key on_input = (input_key)arg;
    char temp = '\0';
    printf("文字を入力してください (qで終了)\n");

    while (1) 
    {
        if (scanf(" %c", &temp) != 1) continue;
        if (on_input != NULL) 
        {
            on_input(temp);
            if(temp == 'q')
            {
                break;
            }
        }    
    }
    return NULL;
}

int main(void) 
{
    pthread_t th;
    pthread_create(&th, NULL, key_watch, (void *)callback); 

    while (1) 
    {
        pthread_mutex_lock(&mutex);

        while (data_flag == 0)
        {
            pthread_cond_wait(&cond, &mutex);
        }
        printf("受信した文字：%c\n",input_ch);
        data_flag = 0;
        
        if (input_ch == 'q')
        {
            pthread_mutex_unlock(&mutex);
            break;
        }
        pthread_mutex_unlock(&mutex);
    }

    pthread_join(th, NULL);
    printf("プログラムを終了します。\n");

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);

    return 0;
}