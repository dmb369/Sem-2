#include <stdio.h>
#include <string.h>

typedef struct string{
    char mystring[30];
}s1;

int main()
{
    s1 string;
    strcpy (string.mystring, "Hello World");
    printf("%s",string.mystring);
}