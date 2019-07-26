#include <stdio.h>
#define L 10
#define r 8
#define c 6

int main () {
    
    int i,j;
    int vect1[10] = {1,2,3,4,5,6,7,8,9,10};
    int vect2[L] = {1,2,3};
    int mat[r][c];
    
    for (i=0;i<L;i++) {
    	
    	printf("%d ",vect1[i]);
    }
    printf("\n");
    
    for (i=0;i<L;i++) {
    	
    	printf("%d ",vect2[i]);
    }
    
    return 0;
}