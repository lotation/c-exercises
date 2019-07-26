#include <stdlib.h>
#include <stdio.h>
int main()  {
    int a;
    printf("Insert a number\n");
    scanf("%d",&a);
    if (a<0 || a>30)    {
        printf("Il numero non equivale ad un voto\n");
        exit(0);
    } else if (a<18)   {
        printf("Il voto non è sufficiente!\n");
        exit(0);
    } else if (a>=18 && a==30)    {
        printf("Complimenti!! Voto massimo!\n");
        exit(0);
    } else  {
        printf("Il voto è sufficiente!\n");
    }
    
    return 0;
}