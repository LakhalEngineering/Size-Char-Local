#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>



#define BUFSIZE 4096

int main()
{

    // get the local
    char *locale = setlocale(LC_ALL, "");
    printf("locale: %s\n", locale);

    char input[BUFSIZE];
    fgets(input, BUFSIZE-1, stdin);
    printf("input(%lu): %s\n", strlen(input), input);
}