#include <stdio.h>
#include <math.h>

int main() {
  int total=44, catsPerRow=6;

  printf("%d gatti in totale e %d file\n",total,catsPerRow);
  int rows=ceil((double)total/(double)catsPerRow);
  printf("%d\n",rows);


  return 0;
}
