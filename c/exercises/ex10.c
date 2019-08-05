#include <stdio.h>

int main()  {
    char name[20];
    int birth, mobileNum;

    printf("Who are you?\n");
    scanf("%s\n", name);
    printf("\nWhen did you born?\n");
    scanf("%d\n", birth);
    printf("\nWhat's your mobile?\n");
    scanf("%d\n", mobileNum);

    printf("\nName  : %s ", name);
    printf("\nDOB   : %d ", birth);
    printf("\nMobile    : %d ", mobileNum);

    return 0;
}
