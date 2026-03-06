#include <stdio.h>
int main(void)
{ 
    double i = 0;
    printf("円の半径を入力\n");
    scanf("%lf",&i);
    double en = (i + i) * 3.14;
    double men = i * i * 3.14;
    printf("円周%lf\n面積%lf\n",en,men);
}