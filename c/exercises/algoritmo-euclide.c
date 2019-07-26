#include <stdio.h>
#include <stdlib.h>

int main()  {
    int a,b,r;

    printf("\nInserisci due numeri interi\n");
    scanf("\n%d%d",&a,&b);

    if (b==0)    {
        printf("\n%d è l'MCD!",a);
        exit(0);
    } else  {
        r=a%b;
        while (r!=0)    {
            a=b,b=r;
            r=a%b;
        }
        printf("\n%d è l'MCD!\n",b);
    }
    
    return 0;
}
     