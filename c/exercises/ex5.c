#include <stdio.h>
#include <math.h>
#define n 5

int main()  {
    
    int i;
    float num,max;
    int tot=0;

    for ( i = 0; i < n; i++)
    {
        printf("\nInsert n° %d ",i);
        scanf("\n%f",&num);

        if (i==0)   {
            max=num;
        }   else    {
            if (num>max)    {
                max=num;
            }
            
        }
        tot=tot+num;        
    }
       
    printf("\nIl maggiore è %.3f",max);
    
    float average=tot/5;
    printf("\nLa media è %.2f",average);
    
    printf("\nLa radice quadrata della somma è %f \n",sqrt(tot));
    
    return 0;    
}