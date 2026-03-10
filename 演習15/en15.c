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

    /*int max_score = 0;
    char fastName[10];*/
    list dammy = table[0];
    int member = sizeof(table) / sizeof(table[0]);
    int i,j,k = 0;

    printf("--------------------名前順--------------------\n");
    

    /*table[i]以降を比較し最も早い名前(a~z順)
    とtable[i]番目を入れ替える選択ソート*/

    /*for(i = 0; i < member -1; i++)
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
        dammy = table[i];
        table[i] = table[k];
        table[k] = dammy;
    }*/

    //バブルソート
    for (i = 0; i < member - 1; i++) 
    {
        for (j = 0; j < member - 1 - i; j++) 
        {
            if (strcmp(table[j].name, table[j+1].name) > 0) 
            {
                // データ入れ替え
                dammy = table[j];
                table[j] = table[j+1];
                table[j+1] = dammy;
            }
        }
    }
    for(int i = 0; i < member ; i++)
    {
        //出力
        printf("%s %d\n",table[i].name,table[i].score);
    }

    printf("--------------------成績順--------------------\n");

 /*   for(i = 0; i < member - 1; i++)
    {
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
        dammy = table[i];
        table[i] = table[k];
        table[k] = dammy; 
    }*/

        //バブルソート
    for (i = 0; i < member - 1; i++) 
    {
        for (j = 0; j < member - 1 - i; j++) 
        {
            if (table[j].score > table[j+1].score) 
            {
                // データ入れ替え
                dammy = table[j];
                table[j] = table[j+1];
                table[j+1] = dammy;
            }
            else if (table[j].score == table[j+1].score)
            {
                //scoreが同じなら名前が早い順
                if (strcmp(table[j].name, table[j+1].name) > 0) 
                {
                    dammy = table[j];
                    table[j] = table[j+1];
                    table[j+1] = dammy;
                }
                
            }
            
            
        }
    }
    for(i = 0; i < member ; i++)
    {
        //出力
        printf("%s %d\n",table[i].name,table[i].score);
    }
    return 0;
}