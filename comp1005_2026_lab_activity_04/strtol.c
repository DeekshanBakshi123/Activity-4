#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char text[] = "25abc";
    char *endptr;

    long number = strtol(text, &endptr, 10);

    printf("%ld\n", number);
    printf("%s\n", endptr);

    return 0;
}