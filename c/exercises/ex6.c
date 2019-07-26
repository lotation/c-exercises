/*Chiede all'utente altezza e base di un rettangolo che verrà stampato tramite dei caratteri */
#include <stdio.h>

int main() {
    int a,b; // a=altezza b=base
    printf("\nInserisci un valore per l'altezza del rettangolo\n");
    scanf("\n%d",&a);
    printf("\nInserisci un valore per la base del rettangolo\n");
    scanf("\n%d",&b);

    char i,j;
    for ( i = 0; i < a; i++)    {
        printf("\n");
        for ( j = 0; j < b; j++)    {
            printf("-");
        }
        
    }
    printf("\n");

    return 0;
}
