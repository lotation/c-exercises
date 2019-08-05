#include <stdio.h>
#include <stdlib.h>

int main()  {
    char name[20], surname[50];
    int day,month,year;
    long int mobileNum;

    printf("Who are you?\n");
    scanf("%s %s", name, surname);
    printf("\nWhen did you born?\n");
    scanf("\n%d/%d/%d",&day,&month,&year);

    if (day>31 || day<0)    {
        printf("\nLa data inserita non è valida");
        exit(0);
    } else if (month>12 || month<0) {
        printf("\nLa data inserita non è valida");
        exit(0);
    } else if (year<0 || year>3000 )  {
        printf("\nLa data inserita non è valida");
        exit(0);
    }

    printf("\nWhat's your mobile?\n");
    scanf("%ld", &mobileNum);
    printf("\n" );

    printf("\nName      : %s %s", name, surname);
    printf("\nDOB       : %d/%d/%d ", day, month, year);
    printf("\nMobile    : %ld ", mobileNum);

    printf("\n\nBut in 100 years she/he'll be dead so pay respect: drop an\n\n" );
    printf("#######\n#\n#\n#####\n#\n#\n#");

    return 0;
}
