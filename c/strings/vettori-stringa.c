#include <stdio.h>
#include <string.h>

#define lines 5
#define columns 56

int main()  {
    int i,j;
    char vectString [lines][columns];

    for ( i = 0; i < lines; i++) {
      puts("Inserisci una stringa");
      scanf("%s\n", vectString[i]);
    }

    for ( i = 0; i < lines; i++) {
      printf("%s\n", vectString[i]);
    }



    return 0;
}
