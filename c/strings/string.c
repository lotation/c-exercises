#include <stdio.h>
#include <string.h>

int main()  {
    char string[20], string2[20]="Hi everyone!\n";

    printf("Hi everyone!\n");
    scanf(" %s ",&string);
    printf("\n%s",string);

    puts("\nInsert a string");

    gets(string2);
    puts(string2);


    return 0;
}
