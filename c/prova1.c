#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s1[50],s2[50];

  printf("Inserisci due stringhe\n" );
  scanf("%s\n%s", s1,s2);

  long int a = strlen(s1);
  long int b = strlen(s2);

  printf("\nLa prima stringa contiene %ld caratteri   ", a);
  printf("La seconda stringa contiene %ld caratteri\n", b);

  return 0;
}
