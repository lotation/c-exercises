#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()  {
    int D;

    printf("\nInserisci un numero reale\n");
    scanf("\n%d",&D);

    int Aq=pow(D,2);
    printf("\nL'area del quadrato di lato D %d vale %d",D,Aq);
    
    float Ac=(Aq/4)*M_PI;
    printf("\nL'area della circonferenza di diametro D %d vale %.2f",D,Ac);

    float At=(Aq*sqrt(3))/8;
    printf("\nL'area del triangolo equilatero di lato D %d vale %.2f\n\n",D,At);

    return 0;
}