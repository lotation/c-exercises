/* Fibonacci sequence + ask user how many numbers to print */
#include <stdio.h>
#include <stdlib.h>

int main()   {

    int a,b,c,n,i;
    a=0,b=1;
    printf("\nQuanti numeri vuoi che siano generati?\n");
    scanf("\n%d",&n);
    for ( i = 0; i < n; i++)
    {
        c=b+a;
        a=b,b=c;
        printf("\n%d",c);
    }
    
    return 0;

}