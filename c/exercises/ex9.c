#include <stdio.h>
#include <stdlib.h>

int main()  {
    int a,b,c,d;
    printf("\nInserisci 4 numeri\n");
    scanf("\n%d\n%d\n%d\n%d",&a,&b,&c,&d);
    
    if (a>b&&c&&d)
    {
        printf("\nIl numero %d è il più grande\n",a);
    } else if (b>a&&c&&d)
    {
        printf("\nIl numero %d è il più grande\n",b);
    } else if (c>d&&a&&b)
    {
        printf("\nIl numero %d è il più grande\n",c);

    } else
    {
        printf("\nIl numero %d è il più grande\n",d);
    }
    
    return 0;
    
}