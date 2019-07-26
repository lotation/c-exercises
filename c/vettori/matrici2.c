#include <stdio.h>
#define L 10
#define R 7
#define C 9

int main () {
    int i,j;
    int vect1[10] = {1,2,3,4,5,6,7,8,9,10};
    int vect2[L] = {2,4,8,16,32,64,128,256,512,1024};
    int mat1[R][C] = {1,2,3,4,5,6,7,8,9};
    int mat2[R][C] = {{2,4,6,8,10},{3,6,9,12,15},{5,10,15,20,25},{7,14,21,28,35}};
    
    printf("\n\n");
    for ( i = 0; i < L ; i++)
    {
        printf(" %2d ",vect1[i]);
    }
    printf("\n");
    for ( i = 0; i < L ; i++)
    {
        printf(" %2d ",vect2[i]);
    }
    printf("\n\n\n");

    for ( i = 0; i < R; i++)
    {
        printf("\n");
        for ( j = 0; j < C; j++)
        {
            printf(" %3d ",mat1[i][j]);
        }
        
    }
    printf("\n\n\n");    
    for ( i = 0; i < R; i++)
    {
        printf("\n");
        for ( j = 0; j < C; j++)
        {
            printf(" %3d ",mat2[i][j]);
        }
        
    }


    return 0;
}