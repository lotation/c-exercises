#include <stdio.h>
#include <stdlib.h>
#define n 10

int main() {
  int a,b,i;

  printf("Inserisci un numero tra 0 e 10\n" );
  scanf("%d\n",&a);
  printf("%d\n",a);

  if (a>10 || a<0) {
    printf("Hai inserito un numero < di 0 o > di 10" );
    exit (0);
  } else {
    for (i = 0; i < n+1; i++) {
      printf("%d ",a*i );
    }
  }

  printf("\n");

  return 0;
}
