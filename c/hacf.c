#include <stdio.h>

int main(int argc, char const *argv[]) {
  char name[20];
  printf("Who are you?\n" );
  scanf("%s", name);
  printf("\n");
  //gets(name);
  printf("Hello %s,\nWhat would you like to do?\n\n", name );
  return 0;
}
