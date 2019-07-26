#include <stdio.h>
#include <ctype.h>
int main() {
    /*int carattere = 103;
    char carattere = 'g'; */

    char character;
    //scanf("%c",&character);
    character = getchar();

    printf("\n%d\n",character);
    /*printf("\n%c",character); oppure */ putchar(character);

    int ritorno = isalnum(character);
    printf("\nfunction isalnum returned %d",ritorno);

    printf("\n");
    return 0;
}
