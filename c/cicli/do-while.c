#include <stdio.h>
int main () {
    int num;
    do
    {
        printf("\nInsert a number between 0 and 20\n");
        scanf("%d",&num);
    } while (num!=13);
        printf("\nTerminated because number 13 appeared!\n");
        printf("(just like pokemons)\n");

    return 0;

}
