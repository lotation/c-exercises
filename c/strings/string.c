#include <stdio.h>
#include <string.h>

int main()  {
    char string2[20];
    /*char string[50];

    GETS e SCANF non possono coesistere!

    printf("Insert a string\n");
    scanf(" %s ",string);
    printf("\n%s\n",string); */

    puts("\nInsert a string");

    gets(string2);
    puts(string2);


    return 0;
}
