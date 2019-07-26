#include <stdio.h>
#include <stdlib.h>

int main()  {
    int vector[20];
    int i;
    for ( i = 0; i < 20; i++)
    {
        printf("\nInsermento numero %d\n",i);
        scanf("\n%d",&vector[i]);
    }
    for ( i=20-1; i>=0; i--)
    {
        printf("\n%d",i);
        printf("\n%d",vector[i]);
    }
    

    return 0;
}