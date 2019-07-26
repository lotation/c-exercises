#include <stdio.h>
#include <stdlib.h>

int main()  {
    float num,tot=0;
    int counter=0;
    do
    {
         printf("\nInserisci un numero naturale qualsiasi\n");
        scanf("\n%f",&num);
        if (num>=0)
        {
            tot=tot+num;
            counter++;
        } else
        {
            exit(0);
        }
        
        printf("\nLa media è %.2f \n",tot/counter);
                
    } while (num>=0);

    printf("\nBravo hai inserito un muero negativo bro");
    
    return 0;
}