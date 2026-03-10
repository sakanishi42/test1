#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *th_sum(void *arg) 
{
    pthread_mutex_lock(&mutex);
    int* num2 = (int*)arg;
    *num2 = *num2 + 1;
    pthread_mutex_unlock(&mutex);
    return 0;
}

int main(void)
{
    pthread_t th;
    int num1 = 3;

    printf("変更前の変数＞%d\n", num1);

    pthread_create(&th, NULL, th_sum, (void*)&num1);
    pthread_join(th, NULL);

    printf("変更後の変数＞%d\n", num1);

    pthread_mutex_destroy(&mutex);

    return 0;
}