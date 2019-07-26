#include <stdio.h>
int main()  {
    int a;
    printf("\nInsert a number\n");
    scanf("%d",&a);
    if (a==0)   {
        printf("A\n");
    }else if (a==1) {
        printf("B\n");
    }else if (a==2) {
        printf("C\n");
    }else   {
        printf("ZZ\n");
    }
    
    switch (a)  {
        case 0:
        printf("A\n");
            break;
        case 1:
        printf("B\n");
            break;
        case 2:
        printf("C\n");
            break;
        default:
        printf("ZZ\n");
            break;
    }

    return 0;
}