#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[10];
    int score;
}list;

int main(void)
{
    list table[]=
    {
        {"sara",88},
        {"gintonic",12},
        {"aida",44},
        {"yankoro",35},
        {"kumazaki",44},
        {"onizuka",93},
    };

    list dammy[20];
    int member = sizeof(table) / sizeof(table[0]);
    int i,j,k,l,max_score;
    char fastName[10];

    printf("--------------------名前順--------------------\n");
    
    for(i = 0; i < member -1; i++)
    {
        //名前順
        strcpy(fastName,table[i].name);
        k = i;
        for(j = i + 1; j < member; j++)
        {
            if (strcmp(table[j].name,fastName) < 0)
            {
                strcpy(fastName,table[j].name);
                k = j;
            }
        }
        //データ入れ替え
        dammy[i] = table[i];
        table[i] = table[k];
        table[k] = dammy[i];
    }
    for(int l = 0; l < member ; l++)
    {
        //出力
        printf("%s %d\n",table[l].name,table[l].score);
    }

    printf("--------------------成績順--------------------\n");

    for(i = 0; i < member - 1; i++)
    {
        //年齢順
        strcpy(fastName,table[i].name);
        max_score = table[i].score;
        k = i;
        for (j = i + 1; j < member ; j++) 
        {
            if (table[j].score > max_score) 
            {   
                max_score = table[j].score;
                k = j;
            }
            if(table[j].score == max_score)
            {
                if (strcmp(table[j].name,fastName) < 0)
                {
                    max_score = table[j].score;
                    k = j;
                }
            }

        }
        // データ入れ替え
        dammy[i] = table[i];
        table[i] = table[k];
        table[k] = dammy[i]; 
    }
    for(l = 0; l < member ; l++)
    {
        //出力
        printf("%s %d\n",table[l].name,table[l].score);
    }
    return 0;
}