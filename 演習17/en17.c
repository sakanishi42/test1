#include <stdio.h>
#include <pthread.h>

void *th_sum(void *arg) {
    int* num2 = (int*)arg;
    *num2 = *num2 + 1;
    pthread_exit((void *)num2);
    return 0;
}

int main(void)
{
    pthread_t th;
    int num1 = 3;
    void* th_result = NULL;

    printf("変更前の変数＞%d\n",num1);

    pthread_create(&th, NULL, th_sum, (void*)&num1) ;
    pthread_join(th, &th_result);

    int* result = (int*)th_result;

    printf("変更後の変数＞%d\n",*result);  
    return 0;
}