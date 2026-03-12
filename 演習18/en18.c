#include <stdio.h>
#include <pthread.h>

char input_ch = '\0';
int data_flag = 0;    
int exit_flag = 0;    

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;


void callback() 
{
    data_flag = 1;
    pthread_cond_signal(&cond);
}


void* key_watch(void *arg)
{
    char temp = '\0';
    printf("文字を入力してください (qで終了)\n");

    while (1) 
    {
        if (scanf(" %c", &temp) != 1) continue;
        pthread_mutex_lock(&mutex);
        input_ch = temp;
        
        if (input_ch == 'q')
        {
            exit_flag = 1;
            pthread_cond_signal(&cond); 
            pthread_mutex_unlock(&mutex);
            break;
        }
        callback();
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(void) 
{
    pthread_t th;
    pthread_create(&th, NULL, key_watch, NULL); 

    while (1) 
    {
        pthread_mutex_lock(&mutex);

        while (data_flag == 0 && exit_flag == 0)
        {
            pthread_cond_wait(&cond, &mutex);
        }
        if (exit_flag == 1)
        {
            pthread_mutex_unlock(&mutex);
            break;
        }
        if (data_flag != 0) 
        {
            printf("受信した文字：%c\n",input_ch);
        }
        data_flag = 0;
        pthread_mutex_unlock(&mutex);
    }

    pthread_join(th, NULL);
    printf("プログラムを終了します。\n");

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);

    return 0;
}