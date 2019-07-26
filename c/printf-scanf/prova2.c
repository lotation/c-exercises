#include <stdio.h>

int main() {

    int a,b,c,d,e;
    //char n;

    printf("Insert two numbers ");
    scanf("%d %d",&a,&d);
    printf("Insert another number ");
    scanf("%d",&b);
    //printf("Would you eat a hot wurstel ");
    //scanf("%c",&n);

    c=a+b;
    e=d*(b-1);

    printf("First result is %d ",c);
    printf("\nSecond result is %d ",e);
    //printf("Your answer is%c ",n);
    return 0;
}
