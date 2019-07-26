#include <stdio.h>
#include <stdlib.h>

int main()  {
    int day1,month1,year1;
    int day2,month2,year2;
    
    printf("\nInserisci la prima data nel formato 'gg/mm/aaaa'\n");
    scanf("\n%d/%d/%d",&day1,&month1,&year1);
    printf("\nInserisci la seconda data sempre 12nel formato 'gg/mm/aaaa'\n");
    scanf("\n%d/%d/%d",&day2,&month2,&year2);

    /* 
    printf("\nHai inserito queste date");
    printf("\n%d/%d/%d",day1,month1,year1);
    printf("\n%d/%d/%d",day2,month2,year2);
    printf("\nDesideri procedere?");

    // boolean statement!!

    */
    
    if (day1 && day2>31 || day1 && day2<0)    {
        printf("\nLa/e data/e inserita/e non è/sono valida/e");
        exit(0);
    } else if (month1 && month2>12 || month1 && month2<0) {
        printf("\nLa/e data/e inserita/e non è/sono valida/e");
        exit(0); 
    } else if (year1 && year2<0 || year1 && year2>3000 )  {
        printf("\nLa/e data/e inserita/e non è/sono valida/e");
        exit(0);
    } else  {
        if (year1>year2)    {
            printf("\n%d/%d/%d è la più recente\n",day1,month1,year1);
        } else if (year1==year2 && month1>month2)   {
            printf("\n%d/%d/%d è la più recente\n",day1,month1,year1);
        } else if (year1==year2 && month1==month2 && day1>day2) {
            printf("\n%d/%d/%d è la più recente\n",day1,month1,year1);
        } else if (year1==year2 && month1==month2 && day1==day2)    {
            printf("\nLe date sono uguali\n");
        } else {
            printf("\n%d/%d/%d è la più recente\n",day2,month2,year2);
        }
                
    }
    
    return 0;
}