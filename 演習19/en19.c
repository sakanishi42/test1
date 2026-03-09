#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

int active_id = 0; 
int exit_flag = 0;        


void* work(void* arg) {
    int my_id = *(int*)arg;

    while (1) {
        pthread_mutex_lock(&mutex);

        
        while (active_id != my_id && exit_flag == 0) 
        {
            pthread_cond_wait(&cond, &mutex);
        }

        if (exit_flag) 
        {
            pthread_mutex_unlock(&mutex);
            break;
        }

        printf("\n[スレッド%d] 動作中...\n", my_id);
        pthread_mutex_unlock(&mutex);

        sleep(1);
    }
    return 0;
}

int main() {
    pthread_t th1, th2;
    int id1 = 1, id2 = 2;

    pthread_create(&th1, NULL, work, &id1);
    pthread_create(&th2, NULL, work, &id2);

    printf("コマンドを入力してください:\n");
    printf("1: スレッド1を動かす\n2: スレッド2を動かす\nq: 終了\n");

    char cmd;
    while (1) {
        scanf(" %c", &cmd); 

        pthread_mutex_lock(&mutex);
        if (cmd == '1') {
            active_id = 1;
            printf(">> スレッド1を開始します\n");
        } else if (cmd == '2') {
            active_id = 2;
            printf(">> スレッド2を開始します\n");
        } else if (cmd == 'q') {
            printf("[スレッド%d] 終了しました\n", active_id);
            exit_flag = 1;
            pthread_cond_broadcast(&cond); 
            pthread_mutex_unlock(&mutex);
            break;
        }
        
        pthread_cond_broadcast(&cond);
        pthread_mutex_unlock(&mutex);
    }

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    printf("プログラムを終了します\n");
    return 0;
}